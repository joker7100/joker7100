
#include <stdio.h>
#include <stdbool.h>
#include "../../src/inc/test.h"

#include "../../src/inc/StateMachine.h"

  // Create new state machine object
    stateMachine_t stateMachine;

int StateMachineTest(event_t event)
{
         if(event == EV_BUTTON_PUSHED)
         {
            StateMachine_RunIteration(&stateMachine, EV_BUTTON_PUSHED);
            printf(".....State is now %s.\r\n", StateMachine_GetStateName(stateMachine.currState));
         }

        if(event == EV_TIME_OUT)
         {
             StateMachine_RunIteration(&stateMachine, EV_TIME_OUT);
              printf("ev time :: State is now %s.\r\n", StateMachine_GetStateName(stateMachine.currState));
         }

}
