struct food {char name[256]; double price;};
int printStruct(struct food f);
int modifyStruct(struct food *f, char newName[], double newPrice);
struct food returnEx();
