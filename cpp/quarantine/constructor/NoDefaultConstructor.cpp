
class Box
{
    ///If any non-default constructors are declared, the compiler does not provide a default constructor
public:
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height) {}

private:
    int m_width;
    int m_length;
    int m_height;
};

int main()
{

    Box box1(1, 2, 3);
    Box box2{2, 3, 4};
    //Box box3;         // C2512: no appropriate default constructor available

    ///If a class has no default constructor, an array of objects of that class cannot be constructed by using square-bracket syntax alone
    //Box box[3];       // C2512: no appropriate default constructor available

    ///However, you can use a set of initializer lists to initialize an array of Box objects:
    Box boxes[3]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
}