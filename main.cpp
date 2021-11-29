#include <iomanip>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#define nmax_count_of_operations 1e8
#define cycle 10
//cycle - кількість операцій в одному циклі.
using namespace std;
int a0 = 86, a1 = 31, a2, i;
char b0 = 'i', b1 = 'k', b2 = 'l';
float c0 = 6.7, c1 = 3.6, c2 = 7.5;
double d0 = 1.999, d1 = 1.777, d2 = 3.888;
long long l0 = 1234567565, l1 = -678895467, l2;
clock_t time_;
double time0, time1,time2, time3, time4, time5, time6,
        time7, time8, time9, time10, time11, time12, time13,
        time14, time15, time16, time17, time18, time19, time20;


string get_progress_bar(int count_of_points) {
    int compression_level = 4;
    return string(count_of_points / compression_level, 'X');
}


int main() {
    int e1, e2, e3;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        e1 = e2;
        e1 = e2;
        e1 = e2;
        e1 = e2;
        e1 = e2;
        e1 = e2;
        e1 = e2;
        e1 = e2;
        e1 = e2;
        e1 = e2;
    }
    time0 = (clock() - time_)/(double)CLOCKS_PER_SEC;
    time0 = 0;
    time_=clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        a2 = a0 + a1;
        a2 = a0 + a1;
        a2 = a0 + a1;
        a2 = a0 + a1;
        a2 = a0 + a1;
        a2 = a0 + a1;
        a2 = a0 + a1;
        a2 = a0 + a1;
        a2 = a0 + a1;
        a2 = a0 + a1;
    }
    time1=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res1 = cycle * nmax_count_of_operations / time1;
    //(time "=") > (time "+") <-- ???
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        a2 = a0 - a1;
        a2 = a0 - a1;
        a2 = a0 - a1;
        a2 = a0 - a1;
        a2 = a0 - a1;
        a2 = a0 - a1;
        a2 = a0 - a1;
        a2 = a0 - a1;
        a2 = a0 - a1;
        a2 = a0 - a1;
    }
    time2=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res2 = cycle * nmax_count_of_operations / time2;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        a2 = a0 * a1;
        a2 = a0 * a1;
        a2 = a0 * a1;
        a2 = a0 * a1;
        a2 = a0 * a1;
        a2 = a0 * a1;
        a2 = a0 * a1;
        a2 = a0 * a1;
        a2 = a0 * a1;
        a2 = a0 * a1;
    }
    time3=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res3  = cycle * nmax_count_of_operations / time3;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        a2 = a0 / a1;
        a2 = a0 / a1;
        a2 = a0 / a1;
        a2 = a0 / a1;
        a2 = a0 / a1;
        a2 = a0 / a1;
        a2 = a0 / a1;
        a2 = a0 / a1;
        a2 = a0 / a1;
        a2 = a0 / a1;
    }
    time4=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res4 = cycle * nmax_count_of_operations / time4;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        b2 = b0 + b1;
        b2 = b0 + b1;
        b2 = b0 + b1;
        b2 = b0 + b1;
        b2 = b0 + b1;
        b2 = b0 + b1;
        b2 = b0 + b1;
        b2 = b0 + b1;
        b2 = b0 + b1;
        b2 = b0 + b1;
    }
    time5=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res5 = cycle * nmax_count_of_operations / time5;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        b2 = b0 - b1;
        b2 = b0 - b1;
        b2 = b0 - b1;
        b2 = b0 - b1;
        b2 = b0 - b1;
        b2 = b0 - b1;
        b2 = b0 - b1;
        b2 = b0 - b1;
        b2 = b0 - b1;
        b2 = b0 - b1;
    }
    time6=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res6 = cycle * nmax_count_of_operations / time6;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        b2 = b0 * b1;
        b2 = b0 * b1;
        b2 = b0 * b1;
        b2 = b0 * b1;
        b2 = b0 * b1;
        b2 = b0 * b1;
        b2 = b0 * b1;
        b2 = b0 * b1;
        b2 = b0 * b1;
        b2 = b0 * b1;
    }
    time7=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res7 = cycle * nmax_count_of_operations / time7;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        b2 = b0/b1;
        b2 = b0/b1;
        b2 = b0/b1;
        b2 = b0/b1;
        b2 = b0/b1;
        b2 = b0/b1;
        b2 = b0/b1;
        b2 = b0/b1;
        b2 = b0/b1;
        b2 = b0/b1;
    }
    time8=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res8 = cycle * nmax_count_of_operations / time8;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        c2 = c0 + c1;
        c2 = c0 + c1;
        c2 = c0 + c1;
        c2 = c0 + c1;
        c2 = c0 + c1;
        c2 = c0 + c1;
        c2 = c0 + c1;
        c2 = c0 + c1;
        c2 = c0 + c1;
        c2 = c0 + c1;
    }
    time9=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res9 = cycle * nmax_count_of_operations / time9;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        c2 = c0 - c1;
        c2 = c0 - c1;
        c2 = c0 - c1;
        c2 = c0 - c1;
        c2 = c0 - c1;
        c2 = c0 - c1;
        c2 = c0 - c1;
        c2 = c0 - c1;
        c2 = c0 - c1;
        c2 = c0 - c1;
    }
    time10=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res10 = cycle * nmax_count_of_operations / time10;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        c2 = c0 * c1;
        c2 = c0 * c1;
        c2 = c0 * c1;
        c2 = c0 * c1;
        c2 = c0 * c1;
        c2 = c0 * c1;
        c2 = c0 * c1;
        c2 = c0 * c1;
        c2 = c0 * c1;
        c2 = c0 * c1;
    }
    time11=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res11 = cycle * nmax_count_of_operations / time11;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        c2 = c0 / c1;
        c2 = c0 / c1;
        c2 = c0 / c1;
        c2 = c0 / c1;
        c2 = c0 / c1;
        c2 = c0 / c1;
        c2 = c0 / c1;
        c2 = c0 / c1;
        c2 = c0 / c1;
        c2 = c0 / c1;
    }
    time12=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res12 = cycle * nmax_count_of_operations / time12;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        d2 = d0 + d1;
        d2 = d0 + d1;
        d2 = d0 + d1;
        d2 = d0 + d1;
        d2 = d0 + d1;
        d2 = d0 + d1;
        d2 = d0 + d1;
        d2 = d0 + d1;
        d2 = d0 + d1;
        d2 = d0 + d1;
    }
    time13=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res13 = cycle * nmax_count_of_operations / time13;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        d2 = d0 - d1;
        d2 = d0 - d1;
        d2 = d0 - d1;
        d2 = d0 - d1;
        d2 = d0 - d1;
        d2 = d0 - d1;
        d2 = d0 - d1;
        d2 = d0 - d1;
        d2 = d0 - d1;
        d2 = d0 - d1;
    }
    time14=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res14 = cycle * nmax_count_of_operations / time14;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        d2 = d0 * d1;
        d2 = d0 * d1;
        d2 = d0 * d1;
        d2 = d0 * d1;
        d2 = d0 * d1;
        d2 = d0 * d1;
        d2 = d0 * d1;
        d2 = d0 * d1;
        d2 = d0 * d1;
        d2 = d0 * d1;
    }
    time15=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res15 = cycle * nmax_count_of_operations / time15;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        d2 = d0 / d1;
        d2 = d0 / d1;
        d2 = d0 / d1;
        d2 = d0 / d1;
        d2 = d0 / d1;
        d2 = d0 / d1;
        d2 = d0 / d1;
        d2 = d0 / d1;
        d2 = d0 / d1;
        d2 = d0 / d1;
    }
    time16=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res16 = cycle * nmax_count_of_operations / time16;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        l2 = l0 + l1;
        l2 = l0 + l1;
        l2 = l0 + l1;
        l2 = l0 + l1;
        l2 = l0 + l1;
        l2 = l0 + l1;
        l2 = l0 + l1;
        l2 = l0 + l1;
        l2 = l0 + l1;
        l2 = l0 + l1;
    }
    time17=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res17 = cycle * nmax_count_of_operations / time17;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        l2 = l0 - l1;
        l2 = l0 - l1;
        l2 = l0 - l1;
        l2 = l0 - l1;
        l2 = l0 - l1;
        l2 = l0 - l1;
        l2 = l0 - l1;
        l2 = l0 - l1;
        l2 = l0 - l1;
        l2 = l0 - l1;
    }
    time18=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res18 = cycle * nmax_count_of_operations / time18;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        l2 = l0 * l1;
        l2 = l0 * l1;
        l2 = l0 * l1;
        l2 = l0 * l1;
        l2 = l0 * l1;
        l2 = l0 * l1;
        l2 = l0 * l1;
        l2 = l0 * l1;
        l2 = l0 * l1;
        l2 = l0 * l1;
    }
    time19=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res19 = cycle * nmax_count_of_operations / time19;
    time_ = clock();
    for (i=1;i<=nmax_count_of_operations;i++){
        l2 = l0 / l1;
        l2 = l0 / l1;
        l2 = l0 / l1;
        l2 = l0 / l1;
        l2 = l0 / l1;
        l2 = l0 / l1;
        l2 = l0 / l1;
        l2 = l0 / l1;
        l2 = l0 / l1;
        l2 = l0 / l1;
    }
    time20=(clock()-time_)/(double)CLOCKS_PER_SEC - time0;
    double res20 = cycle * nmax_count_of_operations / time20;
    double mass_of_res[20] = {res1, res2, res3, res4, res5, res6, res7, res8, res9,
                              res10, res11, res12, res13, res14, res15, res16, res17, res18, res19, res20};

    double max_count_of_operations = mass_of_res[0];
    for (int i = 0; i < 20; ++i) {
        if (mass_of_res[i] > max_count_of_operations) {
            max_count_of_operations = mass_of_res[i];
        }
    }

    cout << setiosflags(ios::left);
    cout << max_count_of_operations << endl;
    cout<<"+    int "<< "\t"<<      setw(20) << res1  << setw(30) << get_progress_bar(int((res1*100) / max_count_of_operations))  << int(res1*100 / max_count_of_operations)  <<  '%'<<"\n";
    cout<<"-    int "<<"\t"<<       setw(20) << res2  << setw(30) << get_progress_bar(int((res2*100) / max_count_of_operations))  << int(res2*100 / max_count_of_operations)  <<  '%'<<"\n";
    cout<<"*    int "<<"\t"<<       setw(20) << res3  << setw(30) << get_progress_bar(int((res3*100) / max_count_of_operations))  << int(res3*100 / max_count_of_operations)  <<  '%'<<"\n";
    cout<<"/    int "<<"\t"<<       setw(20) << res4  << setw(30) << get_progress_bar(int((res4*100) / max_count_of_operations))  << int(res4*100 / max_count_of_operations)  << '%' <<"\n";
    cout<<"+    char "<<"\t"<<      setw(20) << res5  << setw(30) << get_progress_bar(int((res5*100) / max_count_of_operations))  << int(res5*100 / max_count_of_operations)  << '%' <<"\n";
    cout<<"-    char "<<"\t"<<      setw(20) << res6  << setw(30) << get_progress_bar(int((res6*100) / max_count_of_operations))  << int(res6*100 / max_count_of_operations)  << '%' <<"\n";
    cout<<"*    char "<<"\t"<<      setw(20) << res7  << setw(30) << get_progress_bar(int((res7*100) / max_count_of_operations))  << int(res7*100 / max_count_of_operations)  << '%' <<"\n";
    cout<<"/    char "<<"\t"<<      setw(20) << res8  << setw(30) << get_progress_bar(int((res8*100) / max_count_of_operations))  << int(res8*100 / max_count_of_operations)  << '%' <<"\n";
    cout<<"+    float "<<"\t"<<     setw(20) << res9  << setw(30) << get_progress_bar(int((res9*100) / max_count_of_operations))  << int(res9*100 / max_count_of_operations)  << '%' <<"\n";
    cout<<"-    float "<<"\t"<<     setw(20) << res10 << setw(30) << get_progress_bar(int((res10*100) / max_count_of_operations)) << int(res10*100 / max_count_of_operations) << '%' <<"\n";
    cout<<"*    float "<<"\t"<<     setw(20) << res11 << setw(30) << get_progress_bar(int((res11*100) / max_count_of_operations)) << int(res11*100 / max_count_of_operations) << '%' <<"\n";
    cout<<"/    float "<<"\t"<<     setw(20) << res12 << setw(30) << get_progress_bar(int((res12*100) / max_count_of_operations)) << int(res12*100 / max_count_of_operations) << '%' <<"\n";
    cout<<"+    double "<<"\t"<<    setw(20) << res13 << setw(30) << get_progress_bar(int((res13*100) / max_count_of_operations)) << int(res13*100 / max_count_of_operations) << '%' <<"\n";
    cout<<"-    double "<<"\t"<<    setw(20) << res14 << setw(30) << get_progress_bar(int((res14*100) / max_count_of_operations)) << int(res14*100 / max_count_of_operations) << '%' <<"\n";
    cout<<"*    double "<<"\t"<<    setw(20) << res15 << setw(30) << get_progress_bar(int((res15*100) / max_count_of_operations)) << int(res15*100 / max_count_of_operations) << '%' <<"\n";
    cout<<"/    double "<<"\t"<<    setw(20) << res16 << setw(30) << get_progress_bar(int((res16*100) / max_count_of_operations)) << int(res16*100 / max_count_of_operations) << '%' <<"\n";
    cout<<"+    long long "<<"\t"<< setw(20) << res17 << setw(30) << get_progress_bar(int((res17*100) / max_count_of_operations)) << int(res17*100 / max_count_of_operations) << '%' <<"\n";
    cout<<"-    long long "<<"\t"<< setw(20) << res18 << setw(30) << get_progress_bar(int((res18*100) / max_count_of_operations)) << int(res18*100 / max_count_of_operations) << '%' <<"\n";
    cout<<"*    long long"<<"\t"<<  setw(20) << res19 << setw(30) << get_progress_bar(int((res19*100) / max_count_of_operations)) << int(res19*100 / max_count_of_operations) << '%' <<"\n";
    cout<<"/    long long "<<"\t"<< setw(20) << res20 << setw(30) << get_progress_bar(int((res20*100) / max_count_of_operations)) << int(res20*100 / max_count_of_operations) << '%' <<"\n";

    system("pause");
}
