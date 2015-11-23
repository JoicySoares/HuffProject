#ifndef COMPRESS
#define COMPRESS
#include <QFile>
#include <QTextStream>
#include <QBitArray>
#include "hufftree.h"


//frequência de cada caractere no arquivo
int* countbytes(QString name);

//exibe o array das frequências em hexa
void hexa(int *array);

//codifica o arquivo usando a arvore de huffman.
QByteArray BinaryCode(QString name);

//transforma a codificação binaria em bytes
QPair<QByteArray, int> toByteArray(QByteArray bits);

QByteArray setzero(QByteArray str, int n);

//cabeçalho
QByteArray Head(int trash, int Tsize);

//comprime
void compress(QString name,QString newname);

//Renomea o arquivo,acrescenta a extensão!
QString renamearquive(const QString name);

#endif // COMPRESS

