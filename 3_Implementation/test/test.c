#include "unity.h"
#include "inc.h"

/* Modify these two lines according to the project */



/* Prototypes for all the test functions */

/* Required by the unity test framework */
char** createboard(){}
/* Required by the unity test framework */
void print(char** Board){}

int isdraw(char** Board){
  TEST_ASSERT_EQUAL(1, check_draw(6));
}


char winningmove(char** Board, int i, int j){}
/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_check_draw);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
