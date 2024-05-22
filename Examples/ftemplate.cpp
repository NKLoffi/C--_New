// template <typename T>
// T max(T x, T y){
//     return (x>y)?x:y;
// }
// int main(){
//     std::cout<<max ('1', '6')<<'\n';
//     return 0;
// }

#include<iostream>
template<typename T, typename U>
auto max(T x, U y){
    return (x>y)?x:y;

}
int main(){
    std::cout<< max(1, 6.2)<<'\n';
    return 0;
}