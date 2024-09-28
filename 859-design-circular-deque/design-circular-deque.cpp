class MyCircularDeque {
public:
        list<int>q;
        int full;
        int f=0;
        int r=0;
    MyCircularDeque(int k) {
        list<int>q;
         full=k;
         f=0;
         r=0;
    }
    
    bool insertFront(int value) {
        if((r-f)<full)
      {  q.push_front(value);
         f--;
        /// cout<<"front me insert kar diya="<<value<<endl;
            return true;
      }
        else
        {
            return false;
        }
    }
    
    bool insertLast(int value) {
       // cout<<"full "<<full<<"--"<<f<<" "<<r<<endl;
       if((r-f) < full)
      {  q.push_back(value);
           r++;
           // cout<<"last me insert kar diya="<<value<<endl;
            return true;
      }
        else
            return false;

    }
    
    bool deleteFront() {
           if(f<r)
      {  
        q.pop_front(); 
           f++;
            return true;
      }
        else
        {
            return false;
        }
    }
    
    bool deleteLast() {
             if(f<r)
      {   q.pop_back(); 
           r--;
            return true;
      }
        else
        {
            return false;
        }
    }
    
    int getFront() {
        if(!isEmpty())
         return q.front();
         else
         return -1;
    }
    
    int getRear() {
            if(!isEmpty())
            return q.back();  
            else
            return -1;
    }
    
    bool isEmpty() {
        if(f>=r)
        return true;
        return false;
    }
    
    bool isFull() {
        if(r-f>=full)
        return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */