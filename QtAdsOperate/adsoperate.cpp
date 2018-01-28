#include "adsoperate.h"
#include<QString>
#include<QJsonObject>
#include<QJsonDocument>

AdsOperate::AdsOperate(QObject *parent) : QObject(parent)
{
    AdsPortOpen();
    AdsGetLocalAddress(&m_addr);
    m_addr.port = AMSPORT_R0_PLC_RTS1;

    int lErr = 0;
    {
        QString  strBool1(".aRR");
        lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool1), &m_hBool1, strBool1.length(), strBool1.toLatin1().data());
		QString  strBool2(".aRL");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool2), &m_hBool2, strBool2.length(), strBool2.toLatin1().data());


		QString strByte("Main.Data_Byte\0");
        lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hByte), &m_hByte, strByte.length(), strByte.toLatin1().data());
        QString strInt("Main.Data_Int\0");
        lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hInt), &m_hInt, strInt.length(), strInt.toLatin1().data());
        QString strArray("Main.Data_Array\0");
        lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hArray), &m_hArray, strArray.length(), strArray.toLatin1().data());
        QString strStruct("Main.Data_Struct\0");
        lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hStruct), &m_hStruct, strStruct.length(), strStruct.toLatin1().data());
    }
}


bool AdsOperate::readBool()
{
    bool bValue;
    AdsSyncReadReq(&m_addr,
        ADSIGRP_SYM_VALBYHND,	//IndexGroup
        m_hBool1,		//IndexOffset
        sizeof(bValue), //DataLength
        &bValue);
    return bValue;
}
char AdsOperate::readByte()
{
    char cValue;
    AdsSyncReadReq(&m_addr,
        ADSIGRP_SYM_VALBYHND,	//IndexGroup
        m_hByte,		//IndexOffset
        sizeof(cValue), //DataLength
        &cValue);
    return cValue;
}

qint16 AdsOperate::readInt()
{
    short cValue;
    AdsSyncReadReq(&m_addr,
        ADSIGRP_SYM_VALBYHND,	//IndexGroup
        m_hInt,		//IndexOffset
        sizeof(cValue), //DataLength
        &cValue);
    return cValue;
}

QVector<int> AdsOperate::readArray()
{
    QVector<short> vecTemp;
    QVector<int> vecValue;
    vecTemp.resize(4);
    AdsSyncReadReq(&m_addr,
        ADSIGRP_SYM_VALBYHND,	//IndexGroup
        m_hArray,		//IndexOffset
        sizeof(qint16) * 4, //DataLength
        &vecTemp[0]);

    for(int i = 0; i < vecTemp.count(); i++)
        vecValue.push_back(vecTemp[i]);
    return vecValue;
}

QByteArray AdsOperate::readStruct()
{
    _AdsStruct adsob;
    AdsSyncReadReq(&m_addr,
        ADSIGRP_SYM_VALBYHND,	//IndexGroup
        m_hStruct,		//IndexOffset
        sizeof(adsob) , //DataLength
        &adsob);
    QJsonObject json;
    json["nData"] = adsob.nData;
    json["cByte"] = adsob.cByte;
    QJsonDocument doc(json);
    return doc.toJson();

}

void AdsOperate::writeBool1(bool bValue)
{
    AdsSyncWriteReq(&m_addr,
        ADSIGRP_SYM_VALBYHND,	//IndexGroup
        m_hBool1,		//IndexOffset
        sizeof(bValue), //DataLength
        &bValue);
}
void AdsOperate::writeBool2(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool2,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}

void AdsOperate::writeByte(char cValue)
{
    AdsSyncWriteReq(&m_addr,
        ADSIGRP_SYM_VALBYHND,	//IndexGroup
        m_hByte,		//IndexOffset
        sizeof(cValue), //DataLength
        &cValue);
}

void AdsOperate::writeInt(qint16 cValue)
{
    AdsSyncWriteReq(&m_addr,
        ADSIGRP_SYM_VALBYHND,	//IndexGroup
        m_hInt,		//IndexOffset
        sizeof(cValue), //DataLength
        &cValue);
}

void AdsOperate::writeArray(QVector<int> nVec)
{
    QVector<short> vecValue;
    for(int i = 0; i < nVec.count(); i++)
        vecValue.push_back(nVec[i]);
    AdsSyncWriteReq(&m_addr,
        ADSIGRP_SYM_VALBYHND,	//IndexGroup
        m_hArray,		//IndexOffset
        sizeof(qint16) * 4, //DataLength
        &vecValue[0]);
}

void AdsOperate::writeStruct(QByteArray str)
{
    QJsonDocument doc = QJsonDocument::fromJson(str);
    if(!doc.isNull())
    {
        QJsonObject json = doc.object();
        _AdsStruct adsob;
        adsob.nData = json["nData"].toInt();
        adsob.cByte = json["cByte"].toInt();
        AdsSyncWriteReq(&m_addr,
            ADSIGRP_SYM_VALBYHND,	//IndexGroup
            m_hStruct,		//IndexOffset
            sizeof(adsob) , //DataLength
            &adsob);
    }
}
