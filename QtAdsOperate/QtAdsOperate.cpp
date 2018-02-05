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
		QString  strFloat5(".VToWXOffset");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hFloat5), &m_hFloat5, strFloat5.length(), strFloat5.toLatin1().data());
		QString  strFloat6(".VToWYOffset");		
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hFloat6), &m_hFloat6, strFloat6.length(), strFloat6.toLatin1().data());
		QString  strInt5(".Data_X");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hFloat7), &m_hFloat7, strInt5.length(), strInt5.toLatin1().data());
		QString  strInt6(".Data_Y");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hFloat8), &m_hFloat8, strInt6.length(), strInt6.toLatin1().data());
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
		QString  strBool30(".WeldMode");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool30), &m_hBool30, strBool30.length(), strBool30.toLatin1().data());
		QString  strBool31(".aVertical");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool31), &m_hBool31, strBool31.length(), strBool31.toLatin1().data());
		QString  strBool32(".LC");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool32), &m_hBool32, strBool32.length(), strBool32.toLatin1().data());
		QString  strBool33(".VC1");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool33), &m_hBool33, strBool33.length(), strBool33.toLatin1().data());
		QString  strBool34(".VC2");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool34), &m_hBool34, strBool34.length(), strBool34.toLatin1().data());
		QString  strBool35(".VC3");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool35), &m_hBool35, strBool35.length(), strBool35.toLatin1().data());
		QString  strBool36(".VC4");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool36), &m_hBool36, strBool36.length(), strBool36.toLatin1().data());
		QString  strBool37(".VC5");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool37), &m_hBool37, strBool37.length(), strBool37.toLatin1().data());
		QString  strBool38(".VC6");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool38), &m_hBool38, strBool38.length(), strBool38.toLatin1().data());
		QString  strBool39(".GD_VisuAxisNumber1");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool39), &m_hBool39, strBool39.length(), strBool39.toLatin1().data());
		QString  strBool40(".GD_VisuAxisNumber2");
		lErr = AdsSyncReadWriteReq(&m_addr, ADSIGRP_SYM_HNDBYNAME, 0x0, sizeof(m_hBool40), &m_hBool40, strBool40.length(), strBool40.toLatin1().data());

		
		
		QString  strString1(".CNCSystem.Channel[1].ActModeString");
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


bool QtAdsOperate::readBool(unsigned int m_hBool)
{
	bool bValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
	return bValue;
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


qint16 QtAdsOperate::readInt(unsigned int m_hInt)
{
	short cValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
	return cValue;
}

float QtAdsOperate::readFloat(unsigned int m_hFloat)
{
	short cValue;
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hFloat,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
	return cValue;
}


QString QtAdsOperate::readString(unsigned int m_hString)
{
	char szVar[11];
	memset(&szVar, 0, 11);
	AdsSyncReadReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hString,		//IndexOffset
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


void QtAdsOperate::writeInt(unsigned int m_hInt,qint16 cValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hInt,		//IndexOffset
		sizeof(cValue), //DataLength
		&cValue);
}

void QtAdsOperate::writeFloat(unsigned int m_hFloat, float bfloat)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hFloat,		//IndexOffset
		sizeof(bfloat), //DataLength
		&bfloat);
}

void QtAdsOperate::writeString(unsigned int m_hString, QString str)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hString,		//IndexOffset
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

void QtAdsOperate::writeBool(unsigned int m_hBool, bool bValue)
{
	AdsSyncWriteReq(&m_addr,
		ADSIGRP_SYM_VALBYHND,	//IndexGroup
		m_hBool,		//IndexOffset
		sizeof(bValue), //DataLength
		&bValue);
}

