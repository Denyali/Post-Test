#include <iostream>

using namespace std;

int main()
{
    int tanda=-1;
    int i;
    int jml;
    string buku[100],cari;
    bool ketemu = false;

    cout<<" Masukan Jumlah Buku: ";
    cin>>jml;

    cout<<endl;

    for (i=0;i<jml;i++)
    {
        cout<<" Masukan Buku Ke - ["<<i+1<< "]: ";
        cin>>buku[i];
    }
    cout<<" Daftar Buku Yang Anda Masukan : "<<endl;
    for (i=0;i<jml;i++)
    {
        cout<<" Buku ke-"<<i+1<<" = "<<buku[i]<<endl;
    }
    cout<<" Masukan Buku Yang Di Cari : ";
    cin>>cari;

    cout<<endl;

    for(i=0;i<jml;i++)
    {
    if (cari == buku[i])
    {
    tanda=i;
    break;
    }
    }
    if (tanda!=-1)
    {
        cout<<" Data Di Temukan Di Index ke-"<<i+1<<endl;
    }
    else
    {
        cout<<" Buku Tidak Di Temukan"<<endl;
    }

    return 0;
}
