#include <cstdio>
#include <cmath>
#include <conio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;
int sign(int val) {
  if (val == 0)  return 0;
  if (val > 0)  return 1;
  else return -1;
}
int mod(int n, int d) {
    int result = n % d;
    if (sign(result) * sign(d) < 0)
        result += d;
    return result;
}
int main() //i,j,k,l,m,t,o,p,q
{
    setlocale(LC_ALL,"Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("color cf");
    string alph="ABCDEFGHIJKLMNOPQRSTUVWXYZабвгдежзийклмнопрстуфхцчшщъыьэюя ,.:!?";
    long long N=26; int param; string s;
    int p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, p7=0, p8=0;
    int p9=0, p10=0, p11=0, p12=0, p13=0, p14=0, p15=0, p16=0;
    cout << "=======================================================" << endl;
    cout << "==== Программа для поиска матриц с определителем 1 ====" << endl;
    cout << "======= для курсовой работы по КМЗИ (7 семестр) =======" << endl;
    cout << "=======================================================" << endl;
    cout << "======== Разработано: Борщенко Д. М4О-409Б-18 =========" << endl;
    cout << "=======================================================" << endl;
    cout << "Введите '0' для вызова помощи!" << endl;
    cout << "Введите размер матрицы ('3' или '4'): "; cin >> param;
    if (param==3) {
        cout << "Вы ввели размер матрицы: 3" << endl;
        cout << "Введите маску или копирните HAAGAAAAAA для поиска хоть какой-нибудь матрицы: " << endl;
        std::cin.ignore();
        std::getline(std::cin,s);
        int dl=s.length();
        if (dl==9) {
            p1=alph.find(s[0]); p2=alph.find(s[1]); p3=alph.find(s[2]);
            p4=alph.find(s[3]); p5=alph.find(s[4]); p6=alph.find(s[5]);
            p7=alph.find(s[6]); p8=alph.find(s[7]); p9=alph.find(s[8]);
            cout << "Программа думает..." << endl;
            for (int i=p1; i<N; i++) {
                for (int j=p2; j<N; j++) {
                    for (int k=p3; k<N; k++) {
                        for (int l=p4; l<N; l++) {
                            for (int m=p5; m<N; m++) {
                                for (int t=p6; t<N; t++) {
                                    for (int o=p7; o<N; o++) {
                                        for (int p=p8; p<N; p++) {
                                            for (int q=p9; q<N; q++) {
                                                int k1=m*q-t*p;
                                                int k2=l*q-o*t;
                                                int k3=l*p-m*o;
                                                int det=mod((mod(i*k1,64)-mod(j*k2,64)+mod(k*k3,64)),64);
                                                if (det==1)
                                                {
                                                    cout << "О, чудо! Найдена матрица размером 3х3 с определителем: " << det << endl;
                                                    cout << i << " " << j << " " << k << endl;
                                                    cout << l << " " << m << " " << t << endl;
                                                    cout << o << " " << p << " " << q << endl;
                                                    cout << alph[i] << alph[j] << alph[k];
                                                    cout << alph[l] << alph[m] << alph[t];
                                                    cout << alph[o] << alph[p] << alph[q] << endl;
                                                    cout << "=======================================================" << endl;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
            cout << "Вы ввели не 9 символов, попробуйте ввести что-нибудь снова!" << endl;
        }
    }
    if (param==4) {
        cout << "Вы ввели размер матрицы: 4" << endl;
        cout << "Введите маску или копирните FCJADAAAAAAAAAAA для поиска хоть какой-нибудь матрицы: " << endl;
        std::cin.ignore();
        std::getline(std::cin,s);
        int dl=s.length();
        if (dl==16) {
            p1=alph.find(s[0]); p2=alph.find(s[1]); p3=alph.find(s[2]); p4=alph.find(s[3]);
            p5=alph.find(s[4]); p6=alph.find(s[5]); p7=alph.find(s[6]); p8=alph.find(s[7]);
            p9=alph.find(s[8]); p10=alph.find(s[9]); p11=alph.find(s[10]); p12=alph.find(s[11]);
            p13=alph.find(s[12]); p4=alph.find(s[13]); p15=alph.find(s[14]); p16=alph.find(s[15]);
            cout << "Программа думает..." << endl;
            for (int i=p1; i<N; i++) {
                for (int j=p2; j<N; j++) {
                    for (int k=p3; k<N; k++) {
                        for (int l=p4; l<N; l++) {
                            for (int m=p5; m<N; m++) {
                                for (int t=p6; t<N; t++) {
                                    for (int o=p7; o<N; o++) {
                                        for (int p=p8; p<N; p++) {
                                            for (int q=p9; q<N; q++) {
                                                for (int s=p10; s<N; s++) {
                                                    for (int r=p11; r<N; r++) {
                                                        for (int f=p12; f<N; f++) {
                                                            for (int x=p13; x<N; x++) {
                                                                for (int w=p14; w<N; w++) {
                                                                    for (int u=p15; u<N; u++) {
                                                                        for (int z=p16; z<N; z++) {
                                                                            int a1=(mod(t*(r*z-u*f)-o*(s*z-f*w)+p*(s*u-r*w),64));
                                                                            int a2=(mod(m*(r*z-f*u)-o*(q*z-f*x)+p*(q*u-r*x),64));
                                                                            int a3=(mod(m*(s*z-f*w)-t*(q*z-f*x)+p*(q*w-s*x),64));
                                                                            int a4=(mod(m*(s*u-r*w)-t*(q*u-r*x)+o*(q*w-s*x),64));
                                                                            int det=mod((i*a1-j*a2+k*a3-l*a4),64);
                                                                            if (det==1) {
                                                                                cout << "О, чудо! Найдена матрица размером 4х4 с определителем: " << det << endl;
                                                                                cout << i << " " << j << " " << k << " " << l << endl;
                                                                                cout << m << " " << t << " " << o << " " << p << endl;
                                                                                cout << q << " " << s << " " << r << " " << f << endl;
                                                                                cout << x << " " << w << " " << u << " " << z << endl;
                                                                                cout << alph[i] << alph[j] << alph[k] << alph[l];
                                                                                cout << alph[m] << alph[t] << alph[o] << alph[p];
                                                                                cout << alph[q] << alph[s] << alph[r] << alph[f];
                                                                                cout << alph[x] << alph[w] << alph[u] << alph[z] << endl;
                                                                                cout << "=======================================================" << det << endl;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
            cout << "Вы ввели не 16 символов, попробуйте ввести что-нибудь снова!" << endl;
        }
    }
    if (param==0) {
        cout << "=======================================================" << endl;
        cout << "Психологическая помощь в выполнении курсовой: vk.com/d3n37" << endl;
        cout << "=======================================================" << endl;
        cout << "Здесь могла бы быть Ваша реклама! Обращаться: vk.com/d3n37" << endl;
        cout << "=======================================================" << endl;
        cout << "Здесь могла бы быть Ваша реклама! Обращаться: vk.com/d3n37" << endl;
        cout << "=======================================================" << endl;
        int height=15;
        for (int i = 0; i < height; i++)
        {
            for (int j = 1; j < height - i; j++)
            {
                cout << ' ';
            }

            for (int j = height - 2 * i; j <= height; j++)
            {
                cout << '^';
            }
            cout << endl;
        }
        for (int i = 0; i < height/10+1; i++){
            int shir=9;
            cout.width(height-shir/2);
            for (int j = 1; j <= shir; j++) cout << "|";
                cout << endl;
        }
        cout << "=======================================================" << endl;
        main();
    }
    else {
        cout << "Такого размера матрицы нет в курсовой! Попробуй нажать 3 или 4..." << endl;
        main();
    }
}
