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

// #define LENGTH 10   
// #define WIDTH  5
// #define NEWLINE '\n'


namespace infomation {
    bool boolean_is_me;
    char char_is_me;
    wchar_t wchar_is_me; // 宽字符类型，通常用于表示 Unicode 字符
    char16_t char16_is_me; // 16 位字符类型，通常用于表示 UTF-16 编码的字符
    char32_t char32_is_me; // 32 位字符类型，通常用于表示 UTF-32 编码的字符

    // std::string 是 C++ 标准库中的字符串类，用于处理字符串
    // std::wstring 是 C++ 标准库中的宽字符串类，用于处理宽字符字符串
    std::string string_is_me;
    std::wstring wstring_is_me; // 宽字符串类型，通常用于表示 Unicode 字符串
    std::string string_is_me;

    int int_is_me;
    float float_is_me;
    double double_is_me;
    short short_is_me; // short：表示变量的范围比 int 更小。short int 可以缩写为 short。
    long long_is_me; // long：表示变量的范围比 int 更大。long int 可以缩写为 long。
    // const 定义常量，表示该变量的值不能被修改。
    const int const_int_is_me; // const int is a constant integer

    // unsigned：表示变量不能存储负数。对于整型变量来说，unsigned 可以将变量范围扩大一倍。
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

// volatile：表示变量的值可能会被外部因素改变，编译器不会对其进行优化。如硬件或其他线程。
// restrict：表示指针指向的内存区域不会被其他指针访问，编译器可以对其进行优化。
// 这两个关键字通常用于优化性能，但在现代 C++ 中不常用。
// volatile 和 restrict 在 C++ 中不是常用的关键字，主要用于 C 语言。
// mutable：mutable 用于修饰类的成员变量。被 mutable 修饰的成员变量可以被修改，即使它们所在的对象是 const 的。
// static：static 用于修饰变量或函数。被 static 修饰的变量或函数的作用域仅限于当前文件或类，不能被其他文件或类访问。

class MutableExample {
public:
    int get_value() const {
        return value_; // const 关键字表示该成员函数不会修改对象中的数据成员
    }
    void set_value(int value) const {
        value_ = value; // mutable 关键字允许在 const 成员函数中修改成员变量
    }
private:
    mutable int value_;
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

    // 标准库类型
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


    const int  LENGTH = 10;
    const int  WIDTH  = 5;
    const char NEWLINE = '\n';

    
    return 0;
}