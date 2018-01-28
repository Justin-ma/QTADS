#ifndef QTADSOPERATE_H
#define QTADSOPERATE_H

#define BOOL  bool

#include <QObject>
#include "TcAdsDef.h"
#include "TcAdsAPI.h"
#include<QVector>

struct _AdsStruct
{
	qint16 nData;
	char cByte;
};

class QtAdsOperate : public QObject
{
	Q_OBJECT
public:
	explicit QtAdsOperate(QObject *parent = 0);
	AmsAddr  m_addr;


public:
	unsigned int m_hBool1;
	unsigned int m_hBool2;
	unsigned int m_hBool3;
	unsigned int m_hBool4;
	unsigned int m_hBool5;
	unsigned int m_hBool6;
	unsigned int m_hBool7;
	unsigned int m_hBool8;
	unsigned int m_hBool9;
	unsigned int m_hBool10;
	unsigned int m_hBool11;
	unsigned int m_hBool12;
	unsigned int m_hBool13;
	unsigned int m_hBool14;
	unsigned int m_hBool15;
	unsigned int m_hBool16;
	unsigned int m_hBool17;
	unsigned int m_hBool18;
	unsigned int m_hBool19;
    unsigned int m_hBool20;
	unsigned int m_hBool21;
	unsigned int m_hBool22;
	unsigned int m_hBool23;

	unsigned int m_hByte;
	unsigned int m_hByte1;
	unsigned int m_hByte2;
	unsigned int m_hInt;
	unsigned int m_hInt1;
	unsigned int m_hInt2;
	unsigned int m_hInt3;
	unsigned int m_hFloat1;
	unsigned int m_hFloat2;
	unsigned int m_hFloat3;
	unsigned int m_hArray;
	unsigned int m_hStruct;
signals:

	public slots :
		bool readBool();
	char readByte();
	qint16 readInt();
	qint16 readInt2();
	float readFloat1();
	QVector<int> readArray();
	QByteArray readStruct();

	void writeBool1(bool bValue);
	void writeBool2(bool bValue);
	void writeBool3(bool bValue);
	void writeBool4(bool bValue);
	void writeBool5(bool bValue);
	void writeBool6(bool bValue);
	void writeBool7(bool bValue);
	void writeBool8(bool bValue);
	void writeBool9(bool bValue);
	void writeBool10(bool bValue);
	void writeBool11(bool bValue);
	void writeBool12(bool bValue);
	void writeBool13(bool bValue);
	void writeBool14(bool bValue);
	void writeBool15(bool bValue);
	void writeBool16(bool bValue);
	void writeBool17(bool bValue);
	void writeBool18(bool bValue);
	void writeBool19(bool bValue);
	void writeBool20(bool bValue);
	void writeBool21(bool bValue);
	void writeBool22(bool bValue);
	void writeBool23(bool bValue);


	void writeInt1(qint16 bInt);
	void writeByte(char bValue);
	void writeByte1(char bValue);
	void writeByte2(char bValue);
	void writeInt(qint16 bInt);
	void writeFloat1(float bfloat);
	void writeFloat2(float bfloat);
	void writeFloat3(float bfloat);
	void writeArray(QVector<int> nVec);
	void writeStruct(QByteArray str);

};

#endif // QTADSOPERATE_H

