#include <stdio.h>
#include <stdbool.h>

#include "src/inc/StateMachine.h"
#include "src/inc/test.h"
#include "parser.h"
#include "Structure.h"
#include "parser_data_convert.h"


struct int_data data[20];



int main()
{
    //Read excel file.
    parse_csv("../test_case.csv");
    // Create new state machine object
    initialize_testcase_data();

    stateMachine_t stateMachine;
    StateMachine_Init(&stateMachine);
    //printf("State is now %s.\r\n", StateMachine_GetStateName(stateMachine.currState));

   //StateMachine_RunIteration(&stateMachine, data[2].event_pass);
   //printf(";;;;State is now %s.\r\n", StateMachine_GetStateName(stateMachine.currState));


   // StateMachineTest(EV_BUTTON_PUSHED);
    StateMachineTest(data[1].event_pass);
    StateMachineTest(data[2].event_pass);
    StateMachineTest(data[3].event_pass);
    StateMachineTest(data[4].event_pass);
    StateMachineTest(data[5].event_pass);
    StateMachineTest(data[6].event_pass);

}
