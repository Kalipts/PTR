#include <iostream>
#include <cstring>

using namespace std;


/*
int main(){
    char my_name[50] = "Le Tran Dat";
    char *ptr_name = my_name;
    ptr_name[1] = 'E';
    cout << my_name << endl;
}*//*
int main(){
    char *ptr = "Le Tran Dat";
    cout << &ptr << endl;
    cout << &("Le Tran Dat") << endl;
    cout << &("LE Tran Dat") << endl;
}*/

/*
int main(){
    cout << "PHAN TRAN THANH NHA"[1];//a[1]
   for(int i = 0;  i < strlen("Phan Tran Thanh Nha"); i++){
       cout << "Phan Tran Thanh Nha"[i];
   }
    cout << endl;
}*/

// viet ham tinh do dai cua mang
/*

int main(){
    float arr[] = {2.5,1.6,0.2,3.14};
    for(int i = 0; i < sizeof(arr)/4;i++){
        cout << arr[i] << endl;
    }
}*/
/*
int main(){
    char a[80] = "a";
    string name[50];
    name[1] = "PHAN TRAN THANH NHA";
    name[2] = "PHAN TRAN THANH NHA 2";
    name[3] = "PHAN TRAN THANH NHA 3";
    for(int i= 1;  i <= 3; i++){
        cout << name[i] << endl;
    }
    cout << a;
}*/
//void * operator new (size_t size);
/*
int main(){
    int *ptr = new int[10];
    cout << ptr << endl;
    cout << &ptr;
    return 0;
}*/
/*
int main(){

    int *p = new int;
    cin >> *p;
    cout << *p;

}*/
// chung ta vua co the cap phat vua co the tao hai tri cho vung nho nay
/*
int main(){

    int *p1 = new int(5);
    int *p2 = new int {*p1};
    p2 = p1;
    int a,b,c;
    a = b = c = 5;
    cout << a << b << c ;
    cout << *p1 << endl;
    cout << *p2 << endl;
    delete p1,p2;

    return 0;
}*/
/*
int main(){
    int *p = new int(5);
    cout << *p << endl;
    delete p;
    *p = 8;
    cout << *p;
    return 0;
}*/
/*
int main(){
    int *ptr = new int [10];
    for(int i = 0; i < 10; i++){
        cin >> *(ptr+i);
    }
    for(int i = 0; i < 10; i++){
        cout << *(ptr+i);
    }
    return 0;
}*/

void Nhap(int &n,int *ptr){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> *(ptr+i);
    }
}
void Xuat(int n, int *ptr){
    for(int i  = 0; i < n; i++){
        cout << *(ptr+i) << endl;
    }
}
int main(){
    int num_of_elements;
    int *ptr = new int [num_of_elements];
    Nhap(num_of_elements,ptr);
    Xuat(num_of_elements,ptr);
 }