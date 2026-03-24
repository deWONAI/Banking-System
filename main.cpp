#include <iostream>
#include <string>
using namespace std;

struct Hesap {
    string isim;
    string sifre;
    double bakiye;
};

void menuGoster() {
    cout << "\n=== BANKA SİSTEMİ ===" << endl;
    cout << "1. Hesap Oluştur" << endl;
    cout << "2. Giriş Yap" << endl;
    cout << "3. Çıkış" << endl;
    cout << "Seçiminiz: ";
}

void hesapOlustur(Hesap hesaplar[], int &hesapSayisi) {
    if(hesapSayisi >= 10) {
        cout << "Maksimum hesap sayısına ulaşıldı!" << endl;
        return;
    }

    cout << "\n=== HESAP OLUŞTUR ===" << endl;

    cout << "İsim: ";
    cin >> hesaplar[hesapSayisi].isim;

    cout << "Şifre: ";
    cin >> hesaplar[hesapSayisi].sifre;

    cout << "Başlangıç bakiyesi: ";
    cin >> hesaplar[hesapSayisi].bakiye;

    hesapSayisi++;
    cout << "Hesap başarıyla oluşturuldu!" << endl;
}

int main() {
    Hesap hesaplar[10];
    int hesapSayisi = 0;
    int secim;

    do {
        menuGoster();
        cin >> secim;

        switch(secim) {
            case 1:
                hesapOlustur(hesaplar, hesapSayisi);
                break;
            case 2:
                cout << "Giriş eklenecek..." << endl;
                break;
            case 3:
                cout << "Çıkılıyor..." << endl;
                break;
            default:
                cout << "Geçersiz seçim!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                break;
        }
    } while(secim != 3);

    return 0;
}