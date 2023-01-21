#include<iostream>
using namespace std;

#define N 5
int stack[N];
int top = -1;

void push(int x){
	if(top==N-1){
		cout<<"Overflow"<<endl;
	}
	else{
		top++;
		stack[top] = x ;
	}
}

void peek(){
	if(top==-1){
		cout<<"No element present"<<endl;
	}
	else{
		cout<<stack[top]<<endl;
	}
}

void pop(){
	if(top==-1){
		cout<<"Underflow"<<endl;
	}
	else{
		cout<<stack[top]<<endl;
		top--;
	}
}

void display(){
	if(top==-1){
		cout<<"No element present"<<endl;
	}
	else{
		int i;
		// for(i=0;i<N ;i++) Prints elements from bottom to top i.e it doesn't follow LIFO. 
		// Therefore it does not remain a stack, so we print as follows:-
		for(i=top;i>=0 ;i--){
			cout<<stack[i]<<" ";
		}
	}
}
int main(){
	push(9);
	push(10);
	push(11);
	push(12);
	push(13);
	display();


	return 0;
}