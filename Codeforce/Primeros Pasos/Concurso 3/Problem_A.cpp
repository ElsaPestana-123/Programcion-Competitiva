#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int h1,h2,h3;
    int m1,m2,m3;
    int s1,s2,s3;
    int c1,c2,c3;
    int mm1,mm2,mm3;
    int ss1,ss2,ss3;
 
    cin >> h1 >> m1 >> s1 >> c1 >> mm1 >> ss1;
    cin >> h2 >> m2 >> s2 >> c2 >> mm2 >> ss2;
    cin >> h3 >> m3 >> s3 >> c3 >> mm3 >> ss3;
 
    int conversion1 = (h1 * 3600) + (m1 * 60) + s1;
    int conversion2 = (h2 * 3600) + (m2 * 60) + s2;
    int conversion3 = (h3 * 3600) + (m3 * 60) + s3;
 
    int conversion4 = (mm1 * 60) + ss1;
    int conversion5 = (mm2 * 60) + ss2;
    int conversion6 = (mm3 * 60) + ss3;
 
    int total1 = conversion1 + (conversion4 * c1) + 600;
    int total2 = conversion2 + (conversion5 * c2) + 600;
    int total3 = conversion3 + (conversion6 * c3) + 600;
 
    int final = max(total1, max(total2, total3));
    final = final % 86400;
 
    int final_h = final / 3600;
    int final_m = (final % 3600) / 60;
    int final_s = final % 60;
 
    cout << final_h << " " << final_m << " " << final_s << endl;
 
    return 0;
}