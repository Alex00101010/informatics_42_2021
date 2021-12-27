#include <iostream>
#include <cmath>

using namespace std;

class vec3 {
public:
    float x;
    float y;
    float z;
    float len() {
        return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
    }
    vec3 normalized() {
        float vlen = len();
        vec3 resvec {x/vlen,y/vlen,z/vlen};
        return resvec;
    }
};

float scalprod(vec3 vect1, vec3 vect2) {
    float resup = vect1.x * vect2.x + vect1.y * vect2.y + vect1.z * vect2.z;
    float resdown = vect1.len() * vect2.len();
    return (vect1.len() * vect2.len() * (resup/resdown));
}

vec3 vecprod(vec3 vect1, vec3 vect2) {
    float i = vect1.y*vect2.z - vect1.z*vect2.y;
    float j = vect1.z*vect2.x - vect1.x*vect2.z;
    float k = vect1.x*vect2.y - vect1.y*vect2.x;
    vec3 resvec {i,j,k};
    return resvec;
}

int main() {
    vec3 vect1 {1, 5, 3};
    
    vec3 norm = vect1.normalized();
    
    cout<<"1: "<<vect1.len()<<endl;
    cout<<"2: {"<<norm.x<<"; "<<norm.y<<"; "<<norm.z<<"}"<<endl;
    
    float inpx;
    float inpy;
    float inpz;
    cout << "input x: ";
    cin >> inpx;
    cout << "input y: ";
    cin >> inpy;
    cout << "input z: ";
    cin >> inpz;
    vec3 vect2 {inpx, inpy, inpz};
    
    float scal = scalprod(vect1, vect2);
    vec3 vect = vecprod(vect1, vect2);
    
    cout<<"3: "<<scal<<endl;
    cout<<"4: {"<<vect.x<<"; "<<vect.y<<"; "<<vect.z<<"}"<<endl;

    return 0;
}
