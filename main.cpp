#include <QDebug>
#include<QApplication>
#include "compress.h"
#include "hufftree.h"
#include "decompress.h"
#include <time.h>
#include "gui.h"

using namespace std;
int main(int argv, char* argc[])
{
    clock_t  start, end;
    start = clock();
    QString name;
    if(argv == 2){
        name = argc[1];

        if(name == "--gui"){
            QApplication a(argv, argc);
            Gui w;
            w.show();
            return a.exec();

            }
        else if (name.right(5)==".huff"){
            decompress(name,"");
        }
    }
    else if (argv==3){
        if(!strcmp(argc[1],"-c")){
            name=argc[2];
            compress(name,"");
        }
    }
    else if(argv==4){
        name=argc[1];
        qDebug()<< name;
        if(!strcmp(argc[2],"-d")){
            QString local=argc[3];
            decompress(name,local);
        }
    }
    else if (argv==5){
        name=argc[2];
        if(!strcmp(argc[1],"-c") && !strcmp(argc[3],"-o")  ){
            QString newname=argc[4];
            compress(name,newname);
        }
    }
    end=clock();

    qDebug()<<(end-start)/1000<<'s';

}
