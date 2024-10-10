#include <criterion/criterion.h>
#include "option2.h"

Test(push,1){
	Stack s;
	init(&s);
	push(&s,1);
	push(&s,2);
	push(&s,3);
	cr_assert(size(&s)==3);
	cr_assert(peek(&s)==3);
}
//test failed on purpose
Test(pop,2){
	Stack s;
	init(&s);
	cr_assert(1);
	pop(&s);
}
//test failed on purpose
Test(peek,3){
        Stack s;
        init(&s);
        cr_assert(1);
        peek(&s);
}

Test(pop,4){
	Stack s;
	init(&s);
	push(&s,1);
	push(&s,0);
	push(&s,9);
	cr_assert(pop(&s)==9);
	cr_assert(pop(&s)==0);
	cr_assert(pop(&s)==1);
}

Test(peek, 5){
	Stack s;
	init(&s);
	push(&s,3);
	cr_assert(peek(&s)==3);
	push(&s,1);
	cr_assert(peek(&s)==1);
}

Test(count, 6){
	Stack s;
	init(&s);
	cr_assert(size(&s)==0);
	push(&s,1);
	cr_assert(size(&s)==1);
	push(&s,3);
	cr_assert(size(&s)==2);
}





