#include "QtAdsOperate.h"
#include<QString>
#include<QJsonObject>
#include<QJsonDocument>

QtAdsOperate::QtAdsOperate(QObject *parent) : QObject(parent)
{
	AdsPortOpen();
	AdsGetLocalAddress(&m_addr);
	m_addr.port = AMSPORT_R0_PLC_RTS1;

	int lErr = 0;
	{
		QString  strBool1(".aVerticalL");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool1), &m_hBool1, strBool1.length(), strBool1.toLatin1().data());
		QString  strBool2(".aVerticalR");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool2), &m_hBool2, strBool2.length(), strBool2.toLatin1().data());
		QString  strBool3(".aLevelR");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool3), &m_hBool3, strBool3.length(), strBool3.toLatin1().data());
		QString  strBool4(".aLevelL");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool4), &m_hBool4, strBool4.length(), strBool4.toLatin1().data());
		QString  strBool5(".aRaR");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool5), &m_hBool5, strBool5.length(), strBool5.toLatin1().data());
		QString  strBool6(".aRaL");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool6), &m_hBool6, strBool6.length(), strBool6.toLatin1().data());
		QString  strBool7(".aAnR");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool7), &m_hBool7, strBool7.length(), strBool7.toLatin1().data());
		QString  strBool8(".aAnL");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool8), &m_hBool8, strBool8.length(), strBool8.toLatin1().data());
		QString  strBool9(".aZAxisL");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool9), &m_hBool9, strBool9.length(), strBool9.toLatin1().data());
		QString  strBool10(".aZAxisR");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool10), &m_hBool10, strBool10.length(), strBool10.toLatin1().data());
		QString  strBool11(".aRL");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool11), &m_hBool11, strBool11.length(), strBool11.toLatin1().data());
		QString  strBool12(".aRR");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool12), &m_hBool12, strBool12.length(), strBool12.toLatin1().data());
		QString  strBool13(".aWR");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool13), &m_hBool13, strBool13.length(), strBool13.toLatin1().data());
		QString  strBool14(".aWL");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool14), &m_hBool14, strBool14.length(), strBool14.toLatin1().data());
		
		QString  strBool15(".aStart");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool15), &m_hBool15, strBool15.length(), strBool15.toLatin1().data());
		QString  strBool16(".aReset");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool16), &m_hBool16, strBool16.length(), strBool16.toLatin1().data());
		QString  strBool17(".aStop");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool17), &m_hBool17, strBool17.length(), strBool17.toLatin1().data());
		QString  strBool18(".aPause");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool18), &m_hBool18, strBool18.length(), strBool18.toLatin1().data());
		
		QString  strInt1(".TungstenTotalNum");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hInt1), &m_hInt1, strInt1.length(), strInt1.toLatin1().data());
		QString  strInt2(".TungstenWeldNum");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hInt2), &m_hInt2, strInt2.length(), strInt2.toLatin1().data());
		QString  strFloat1(".WireTotalNum");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hFloat1), &m_hFloat1, strFloat1.length(), strFloat1.toLatin1().data());
		
		QString  strBool19(".bbX");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool19), &m_hBool19, strBool19.length(), strBool19.toLatin1().data());
		QString  strBool20(".bbY");
		
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool20), &m_hBool20, strBool20.length(), strBool20.toLatin1().data());
		QString  strFloat2(".XSetV");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hFloat2), &m_hFloat2, strFloat2.length(), strFloat2.toLatin1().data());
		QString  strFloat3(".YSetV");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hFloat3), &m_hFloat3, strFloat3.length(), strFloat3.toLatin1().data());
		QString  strFloat4(".LayerDistance");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hFloat4), &m_hFloat4, strFloat4.length(), strFloat4.toLatin1().data());

		
		QString  strInt3(".VToWXOffset");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hInt3), &m_hInt3, strInt3.length(), strInt3.toLatin1().data());
		QString  strInt4(".VToWYOffset");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hInt4), &m_hInt4, strInt4.length(), strInt4.toLatin1().data());
		QString  strInt5(".XOffset");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hInt5), &m_hInt5, strInt5.length(), strInt5.toLatin1().data());
		QString  strInt6(".YOffset");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hInt6), &m_hInt6, strInt6.length(), strInt6.toLatin1().data());
		QString  strInt7(".LayerCount");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hInt7), &m_hInt7, strInt7.length(), strInt7.toLatin1().data());

		
		QString  strBool21(".PLCManualAxisPlus");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool21), &m_hBool21, strBool21.length(), strBool21.toLatin1().data());
		QString  strBool22(".PLCManualAxisMinus");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool22), &m_hBool22, strBool22.length(), strBool22.toLatin1().data());
		QString  strBool23(".PLCMachineMode[1].Automatic");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool23), &m_hBool23, strBool23.length(), strBool23.toLatin1().data());
		QString  strBool24(".PLCMachineMode[1].Manual");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool24), &m_hBool24, strBool24.length(), strBool24.toLatin1().data());
		QString  strBool25(".bStartPro");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool25), &m_hBool25, strBool25.length(), strBool25.toLatin1().data());
		QString  strBool26(".PLCMachineMode[1].Start");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool26), &m_hBool26, strBool26.length(), strBool26.toLatin1().data());
		QString  strBool27(".Panel_photograph");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool27), &m_hBool27, strBool27.length(), strBool27.toLatin1().data());
		QString  strBool28(".OriginBack");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool28), &m_hBool28, strBool28.length(), strBool28.toLatin1().data());
		QString  strBool29(".aLevel");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool29), &m_hBool29, strBool29.length(), strBool29.toLatin1().data());

		
		QString  strString1("Main.ActModeString");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hString1), &m_hString1, strString1.length(), strString1.toLatin1().data());
		QString  strString2(".sProgram");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hString2), &m_hString2, strString2.length(), strString2.toLatin1().data());
		QString  strString3(".ErrorCode");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hString3), &m_hString3, strString3.length(), strString3.toLatin1().data());


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


bool QtAdsOperate::readBool()
{
	bool bValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool1,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
	return bValue;
}
char QtAdsOperate::readByte()
{
	char cValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hByte,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
	return cValue;
}


qint16 QtAdsOperate::readInt()
{
	short cValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
	return cValue;
}

qint16 QtAdsOperate::readInt2()
{
	short cValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt2,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
	return cValue;
}

qint16 QtAdsOperate::readInt5()
{
	short cValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt5,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
	return cValue;
}
qint16 QtAdsOperate::readInt6()
{
	short cValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt6,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
	return cValue;
}

float QtAdsOperate::readFloat1()
{
	short cValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hFloat1,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
	return cValue;
}

float QtAdsOperate::readFloat4()
{
	short cValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hFloat4,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
	return cValue;
}

QString QtAdsOperate::readString1()
{
	char szVar[5];
	memset(&szVar, 0, 5);
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hString1,		//IndexOffset
		sizeof(szVar), //DataLength
		&szVar);

	return QString(szVar);
}

QString QtAdsOperate::readString2()
{	
	char szVar[11];
	memset(&szVar, 0, 11);
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hString2,		//IndexOffset
		sizeof(szVar), //DataLength
		&szVar);

	return QString(szVar);
}
QString QtAdsOperate::readString3()
{
	char szVar[11];
	memset(&szVar, 0, 11);
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hString3,		//IndexOffset
		sizeof(szVar), //DataLength
		&szVar);

	return QString(szVar);
}

QVector<int> QtAdsOperate::readArray()
{
	QVector<short> vecTemp;
	QVector<int> vecValue;
	vecTemp.resize(4);
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hArray,		//IndexOffset
		sizeof(qint16) * 4, //DataLength
		&vecTemp[0]);

	for (int i = 0; i < vecTemp.count(); i++)
		vecValue.push_back(vecTemp[i]);
	return vecValue;
}

QByteArray QtAdsOperate::readStruct()
{
	_AdsStruct adsob;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hStruct,		//IndexOffset
		sizeof(adsob), //DataLength
		&adsob);
	QJsonObject json;
	json["nData"] = adsob.nData;
	json["cByte"] = adsob.cByte;
	QJsonDocument doc(json);
	return doc.toJson();

}

void QtAdsOperate::writeByte(char cValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hByte,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
}

void QtAdsOperate::writeInt(qint16 cValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
}

void QtAdsOperate::writeInt1(qint16 cValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt1,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
}
void QtAdsOperate::writeInt3(qint16 cValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt3,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
}
void QtAdsOperate::writeInt4(qint16 cValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt4,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
}
void QtAdsOperate::writeInt7(qint16 cValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt7,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
}
void QtAdsOperate::writeFloat1(float cValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hFloat1,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
}
void QtAdsOperate::writeFloat2(float cValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hFloat2,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
}
void QtAdsOperate::writeFloat3(float cValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hFloat3,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
}

void QtAdsOperate::writeString2(QString str)
{
		AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hString2,		//IndexOffset
		str.length(), //DataLength			
		str.toLatin1().data());
}

void QtAdsOperate::writeArray(QVector<int> nVec)
{
	QVector<short> vecValue;
	for (int i = 0; i < nVec.count(); i++)
		vecValue.push_back(nVec[i]);
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hArray,		//IndexOffset
		sizeof(qint16) * 4, //DataLength
		&vecValue[0]);
}

void QtAdsOperate::writeStruct(QByteArray str)
{
	QJsonDocument doc = QJsonDocument::fromJson(str);
	if (!doc.isNull())
	{
		QJsonObject json = doc.object();
		_AdsStruct adsob;
		adsob.nData = json["nData"].toInt();
		adsob.cByte = json["cByte"].toInt();
		AdsSyncWriteReq(&m_addr,
			ADSIGRP_SYM_VALBYHND,	//IndexGroup
			m_hStruct,		//IndexOffset
			sizeof(adsob), //DataLength
			&adsob);
	}
}

void QtAdsOperate::writeBool1(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool1,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool2(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool2,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}

void QtAdsOperate::writeBool3(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool3,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool4(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool4,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool5(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool5,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool6(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool6,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool7(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool7,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool8(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool8,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}

void QtAdsOperate::writeBool9(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool9,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool10(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool10,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}

void QtAdsOperate::writeBool11(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool11,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool12(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool12,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool13(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool13,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool14(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool14,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool15(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool15,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool16(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool16,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool17(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool17,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool18(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool18,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool19(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool19,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool20(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool20,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool21(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool21,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool22(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool22,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool23(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool23,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool24(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool24,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool25(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool25,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool26(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool26,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool27(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool27,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool28(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool28,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}
void QtAdsOperate::writeBool29(bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool29,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}

