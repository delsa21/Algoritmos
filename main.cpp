#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> vec, int target){
    for(int i=0; i<vec.size(); i++){
        if(vec[i]>target){
            return vec[i];
        }
    };
    return -1;
}

int main() {
    vector<int> vec = {5, 2, 9, 7, 4, 6};
    int target;

    cout << endl << "Que numero quieres buscar?" << endl;
    cin >> target;

    int index = linearSearch(vec,target);

    if(index!=1){
        cout << endl << "El primer elemento mayor en el vector es " << index << endl;
    } else{
        cout << endl << "Elemento no encontrado" << endl;
    }
    return 0;
}