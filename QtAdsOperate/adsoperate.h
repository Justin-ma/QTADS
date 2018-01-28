#ifndef ADSOPERATE_H
#define ADSOPERATE_H

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

class AdsOperate : public QObject
{
    Q_OBJECT
public:
    explicit AdsOperate(QObject *parent = 0);
    AmsAddr  m_addr;


public:
	unsigned int m_hBool1;
	unsigned int m_hBool2;
    unsigned int m_hByte;
    unsigned int m_hInt;
    unsigned int m_hArray;
    unsigned int m_hStruct;
signals:

public slots:
    bool readBool();
    char readByte();
    qint16 readInt();
    QVector<int> readArray();
    QByteArray readStruct();

    void writeBool1(bool bValue);
	void writeBool2(bool bValue);
    void writeByte(char bValue);
    void writeInt(qint16 bInt);
    void writeArray(QVector<int> nVec);
    void writeStruct(QByteArray str);

};

#endif // ADSOPERATE_H
