#include "hashmap.h"
#include <stdio.h>
#include <stdbool.h>

bool basicInsertGetTest(){
	struct IntToIntHashMap* testHMap = createIntToIntHashMap(10);
	intToIntHashMapInsert(testHMap, 1, 10);
	intToIntHashMapInsert(testHMap, 2, 20);
	intToIntHashMapInsert(testHMap, 3, 30);
	int getOne = intToIntHashMapGet(testHMap, 1);
	if(getOne != 10){
		printf("Get failiure for key 1,  expected: 10 received: %d\n", getOne);
		destroyIntToIntHashMap(testHMap);
		return false;
	}
	int getTwo = intToIntHashMapGet(testHMap, 2);
	if(getTwo != 20){
		printf("Get failiure for key 2,  expected: 20 received: %d\n", getTwo);
		destroyIntToIntHashMap(testHMap);
		return false;
	}
	int getThree = intToIntHashMapGet(testHMap, 3);
	if(getThree != 30){
		printf("Get failiure for key 3,  expected: 30 received: %d\n", getThree);
		destroyIntToIntHashMap(testHMap);
		return false;
	}
	destroyIntToIntHashMap(testHMap);
	return true;
}

int main(int argc, char** argv){
	printf("Starting tests!\n");
	bool passesTest = false;
	passesTest = basicInsertGetTest();
	if(passesTest){
		printf("Basic insert and get test passed!\n");
	}
	else{
		printf("Basic insert and get test failed!\n");
	}

	return 0;
}
