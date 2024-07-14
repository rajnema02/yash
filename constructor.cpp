// #include<iostream>
// using namespace std;

// class construct{
//     private:
//         int age = 10;
//     public:
//         construct(int x){
//             cout<<x;
//         }
//         void getData(){
//             cout<<age;
//         }
// };

// int main(){
//     construct c1(23);
//     c1.getData();
// }



/*Default Constructor*/
// #include<iostream>
// using namespace std;
// class c{
//     private:
//         string name;
//         int age;
//         float height;
//     public:
//         c(){
//             name = "null";
//             age = 0;
//             height = 0.0f;
//         }

//         void getData(){
//             cout<< endl <<"name"<< name;
//             cout<< endl <<"age"<<age;
//             cout<< endl << "height"<<height;
//         }
// };
// int main(){
//     c obj;
//     obj.getData();
// }


/*Parameterised Constructor*/

// #include<iostream>
// using namespace std;
// class h{
//     private:
//         string name;
//         int age;
//         float height;
//     public:
//         h(string nameg ,int ageg , float heightg){
//             name = nameg;
//             age  = ageg;
//             height = heightg;
//         }
//         void getData(){
//             cout<<endl<<"Name : "<<name;
//             cout<<endl<<"Age : "<<age;
//             cout<<endl<<"height : "<<height;
//         }
// };
// int main(){
//     h h1("ritesh", 19, 5.7);
//     h1.getData();
// }


/* Copy Constructor*/
#include<iostream>
using namespace std;

class j{
    private: 
        string name;
        int age;
        float height;
    public:
        j(string name_g = "Null", int age_g = 0, float height_g = 0.0f){
            name = name_g;
            age = age_g;
            height = height_g;
        }
        j(j &obj1){
            name = obj1.name;
            age = obj1.age;
            height = obj1.height;
        }
        void getData(){
            cout<<endl <<"Name : "<<name;
            cout<<endl <<"Age : "<<age;
            cout<<endl <<"Height : "<<height;
        }
};
int main(){
    j obj1("raj", 19, 5.6), obj2(obj1);
    obj1.getData();
    obj2.getData();
}