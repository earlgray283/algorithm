typedef struct data_{
    //hogehoge
}data_t;
typedef struct stack_{
    int n;
    data_t data[100000];
    int (*size)();
    void (*push)(data_t);
    data_t (*pop)(); 
    void (*initStack)();
    int (*isEmpty)();
}stack_t;
stack_t stack;
int size(){return stack.n;}
void push(data_t data){stack.data[stack.n++]=data;}
data_t pop(){return stack.data[--stack.n];}
void initStack(){stack.n=0;}
int isEmpty(){return stack.n?1:0;}
void setStack(){
    stack.size=size;
    stack.pop=pop;
    stack.push=push;
    stack.initStack=initStack;   
    stack.isEmpty=isEmpty;
}