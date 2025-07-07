#include <iostream>
#include <vector>
#include <array> // 添加此行以支持 std::array
#include <map>
#include <set>
#include <string>
using namespace std;

// This is a comment
// This is a multi-line comment
/*
This is a multi-line comment
*/

namespace infomation {
    bool boolean_is_me;
    char char_is_me;
    std::string string_is_me;\

    int int_is_me;
    float float_is_me;
    double double_is_me;
    short short_is_me;
    long long_is_me;
    const int const_int_is_me; // const int is a constant integer

    unsigned int unsigned_int_is_me;
    unsigned short unsigned_short_is_me;
    unsigned long long unsigned_long_long_is_me;

    auto auto_is_me; // auto is a type that is deduced by the compiler
    decltype(auto_is_me) decltype_auto_is_me; // decltype is a type that is deduced by the compiler

    std::initializer_list<int> initializer_list_is_me = {1,2,3}; // initializer_list is a type that is used to initialize a list of values
    std::tuple<int, float, char> t(1, 2.0, 'a');

    int array_is_me[5] = {1, 2, 3, 4, 5}; // 数组
    int* pointer_is_me = &int_is_me; // 指针 储存变量内存地址的类型
    int& reference_is_me = int_is_me; // 引用 变量的别名
    int function_is_me(int a, int b) { // 函数
        return a + b; // 函数体
    };

    struct struct_is_me { // 结构体 可以包含多个不同类型的成员
        int member_int;
        float member_float;
        char member_char;
    };


    class class_is_me { // 类 可以包含多个不同类型的成员和方法
    public:
        int member_int;
        float member_float;
        char member_char;
    };

    union union_is_me { // 联合体 可以包含多个不同类型的成员，但只能存储一个成员的值
        int member_int;
        float member_float;
        char member_char;
    };

    enum enum_is_me { // 枚举 可以定义一组命名的常量
        VALUE_ONE,
        VALUE_TWO,
        VALUE_THREE
    };

    // 枚举类 可以定义一组命名的常量，具有更强的类型安全性
    // 枚举类的作用是为了避免枚举值的命名冲突
    // 枚举类的值是作用域限定的，不能直接使用枚举值，需要使用枚举类名限定
    // 枚举类的值可以指定底层类型，默认是 int 类型
    enum class enum_class_is_me { // 枚举类 可以定义一组命名的常量
        VALUE_ONE,
        VALUE_TWO,
        VALUE_THREE
    };

//标准库类型
    std::vector<int> vector_is_me = {1, 2, 3, 4, 5}; // 向量 是一个动态数组，可以自动调整大小
    std::string string_is_me = "Hello, World!"; // 字符串 是一个动态数组，可以自动调整大小std
    std::array<int, 5> array_fixed_size_is_me = {1, 2, 3, 4, 5}; // 固定大小数组 是一个固定大小的数组，大小在编译时确定

    std::pair<int, float> pair_is_me = {1, 2.0}; // 对 是一个包含两个值的类型
    std::map<int, std::string> map_is_me = {{1, "one"}, {2, "two"}, {3, "three"}}; // 映射 是一个键值对的集合，可以通过键访问值
    std::set<int> set_is_me = {1, 2, 3, 4, 5}; // 集合 是一个不允许重复元素的集合

}

    
int main() {
    std::cout << "Hello CMake!" << std::endl;
    std::cout << "Hello Cpp!" << std::endl;

    
    return 0;
}