/* 
    ただC言語の構造体にメンバ関数持たせてクラスみたいなことしたかっただけです。 
    一番最初にsetQueue()を呼び出してあげればqueueが使えるようになります。かっこいい！
*/
typedef struct data_{
    //ここに扱いたい変数を書く
}data_t;
typedef struct queue_{
    int n,f,t;
    data_t data[100000];
    int (*size)();
    int (*front)();
    int (*tail)();
    void (*enqueue)(data_t);
    data_t (*dequeue)(); 
    void (*init)();
    int (*isEmpty)();
}queue_t;
queue_t queue;
int size(){return queue.n;}
int front(){return queue.f;}
int tail(){return queue.t;}
void enqueue(data_t data){queue.n++;queue.data[queue.t++]=data;}
data_t dequeue(){queue.n--;return queue.data[queue.f++];}
void init(){queue.f=queue.t=queue.n=0;}
int isEmpty(){return queue.n?1:0;}
void setQueue(){
    queue.size=size;
    queue.front=front;
    queue.tail=tail;
    queue.enqueue=enqueue;
    queue.dequeue=dequeue;
    queue.init=init;   
    queue.isEmpty=isEmpty;
}