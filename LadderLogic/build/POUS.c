void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_LOCATED(BOOL,__IX100_0,data__->FACTORYIORESET,retain)
  __INIT_LOCATED_VALUE(data__->FACTORYIORESET,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX100_1,data__->START,retain)
  __INIT_LOCATED_VALUE(data__->START,1)
  __INIT_LOCATED(BOOL,__IX100_2,data__->EMERGENCYSTOP,retain)
  __INIT_LOCATED_VALUE(data__->EMERGENCYSTOP,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX100_3,data__->RETROREFLECT0,retain)
  __INIT_LOCATED_VALUE(data__->RETROREFLECT0,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX100_4,data__->RETROREFLECT1,retain)
  __INIT_LOCATED_VALUE(data__->RETROREFLECT1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX100_5,data__->RETROREFLECT2,retain)
  __INIT_LOCATED_VALUE(data__->RETROREFLECT2,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX100_6,data__->RETROREFLECT3,retain)
  __INIT_LOCATED_VALUE(data__->RETROREFLECT3,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX100_7,data__->TURNTABLEBACKLIMIT,retain)
  __INIT_LOCATED_VALUE(data__->TURNTABLEBACKLIMIT,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX101_0,data__->TURNTABLEFRONTLIMIT,retain)
  __INIT_LOCATED_VALUE(data__->TURNTABLEFRONTLIMIT,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX101_1,data__->TURNTABLELIMIT0,retain)
  __INIT_LOCATED_VALUE(data__->TURNTABLELIMIT0,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX101_2,data__->TURNTABLELIMIT90,retain)
  __INIT_LOCATED_VALUE(data__->TURNTABLELIMIT90,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__IX101_3,data__->LIGHTARRAY7,retain)
  __INIT_LOCATED_VALUE(data__->LIGHTARRAY7,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX100_0,data__->CONVEYOR1,retain)
  __INIT_LOCATED_VALUE(data__->CONVEYOR1,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX100_1,data__->TURNTABLE0ROLLPLUS,retain)
  __INIT_LOCATED_VALUE(data__->TURNTABLE0ROLLPLUS,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX100_2,data__->TURNTABLE0TURN,retain)
  __INIT_LOCATED_VALUE(data__->TURNTABLE0TURN,__BOOL_LITERAL(FALSE))
  __INIT_LOCATED(BOOL,__QX100_3,data__->CONVEYOR2,retain)
  __INIT_LOCATED_VALUE(data__->CONVEYOR2,__BOOL_LITERAL(FALSE))
  RS_init__(&data__->RS0,retain);
  RS_init__(&data__->RS1,retain);
  RS_init__(&data__->RS2,retain);
  __INIT_VAR(data__->SMALLBOX,__BOOL_LITERAL(FALSE),retain)
  RS_init__(&data__->RS3,retain);
  RS_init__(&data__->RS4,retain);
  RS_init__(&data__->RS5,retain);
  RS_init__(&data__->RS6,retain);
  RS_init__(&data__->RS7,retain);
  RS_init__(&data__->RS8,retain);
  RS_init__(&data__->RS9,retain);
  R_TRIG_init__(&data__->R_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  R_TRIG_init__(&data__->R_TRIG3,retain);
  R_TRIG_init__(&data__->R_TRIG4,retain);
  F_TRIG_init__(&data__->F_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG5,retain);
  R_TRIG_init__(&data__->R_TRIG6,retain);
  R_TRIG_init__(&data__->R_TRIG7,retain);
  F_TRIG_init__(&data__->F_TRIG2,retain);
  R_TRIG_init__(&data__->R_TRIG8,retain);
  F_TRIG_init__(&data__->F_TRIG3,retain);
  R_TRIG_init__(&data__->R_TRIG9,retain);
  R_TRIG_init__(&data__->R_TRIG10,retain);
  R_TRIG_init__(&data__->R_TRIG11,retain);
  F_TRIG_init__(&data__->F_TRIG4,retain);
  R_TRIG_init__(&data__->R_TRIG12,retain);
  R_TRIG_init__(&data__->R_TRIG13,retain);
  F_TRIG_init__(&data__->F_TRIG5,retain);
  R_TRIG_init__(&data__->R_TRIG14,retain);
  R_TRIG_init__(&data__->R_TRIG15,retain);
  R_TRIG_init__(&data__->R_TRIG16,retain);
  R_TRIG_init__(&data__->R_TRIG17,retain);
  R_TRIG_init__(&data__->R_TRIG18,retain);
  R_TRIG_init__(&data__->R_TRIG19,retain);
  R_TRIG_init__(&data__->R_TRIG20,retain);
  R_TRIG_init__(&data__->R_TRIG21,retain);
  R_TRIG_init__(&data__->R_TRIG22,retain);
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_LOCATED(data__->START,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_LOCATED(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->RS0.,S,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->RS0.,R1,,(!(__GET_LOCATED(data__->EMERGENCYSTOP,)) || __GET_VAR(data__->R_TRIG2.Q,)));
  RS_body__(&data__->RS0);
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_LOCATED(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG3);
  __SET_VAR(data__->R_TRIG4.,CLK,,__GET_LOCATED(data__->TURNTABLEFRONTLIMIT,));
  R_TRIG_body__(&data__->R_TRIG4);
  __SET_VAR(data__->F_TRIG1.,CLK,,__GET_LOCATED(data__->RETROREFLECT1,));
  F_TRIG_body__(&data__->F_TRIG1);
  __SET_VAR(data__->R_TRIG5.,CLK,,__GET_LOCATED(data__->TURNTABLEBACKLIMIT,));
  R_TRIG_body__(&data__->R_TRIG5);
  __SET_VAR(data__->R_TRIG6.,CLK,,__GET_LOCATED(data__->RETROREFLECT2,));
  R_TRIG_body__(&data__->R_TRIG6);
  __SET_VAR(data__->R_TRIG7.,CLK,,__GET_LOCATED(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG7);
  __SET_VAR(data__->RS2.,S,,__GET_VAR(data__->R_TRIG5.Q,));
  __SET_VAR(data__->RS2.,R1,,((!(__GET_LOCATED(data__->EMERGENCYSTOP,)) || __GET_VAR(data__->R_TRIG6.Q,)) || __GET_VAR(data__->R_TRIG7.Q,)));
  RS_body__(&data__->RS2);
  __SET_VAR(data__->RS1.,S,,(((__GET_LOCATED(data__->EMERGENCYSTOP,) && !(__GET_LOCATED(data__->FACTORYIORESET,))) && __GET_LOCATED(data__->TURNTABLELIMIT0,)) && __GET_VAR(data__->RS0.Q1,)));
  __SET_VAR(data__->RS1.,R1,,(((!(__GET_LOCATED(data__->RETROREFLECT0,)) && ((__GET_VAR(data__->F_TRIG1.Q,) || __GET_VAR(data__->RS2.Q1,)) || __GET_VAR(data__->R_TRIG4.Q,))) || !(__GET_LOCATED(data__->EMERGENCYSTOP,))) || __GET_VAR(data__->R_TRIG3.Q,)));
  RS_body__(&data__->RS1);
  __SET_LOCATED(data__->,CONVEYOR1,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->F_TRIG2.,CLK,,__GET_LOCATED(data__->RETROREFLECT1,));
  F_TRIG_body__(&data__->F_TRIG2);
  __SET_VAR(data__->R_TRIG8.,CLK,,__GET_LOCATED(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG8);
  __SET_VAR(data__->F_TRIG3.,CLK,,__GET_LOCATED(data__->RETROREFLECT2,));
  F_TRIG_body__(&data__->F_TRIG3);
  __SET_VAR(data__->RS3.,S,,(__GET_VAR(data__->F_TRIG2.Q,) && __GET_LOCATED(data__->LIGHTARRAY7,)));
  __SET_VAR(data__->RS3.,R1,,((__GET_VAR(data__->F_TRIG3.Q,) || !(__GET_LOCATED(data__->EMERGENCYSTOP,))) || __GET_VAR(data__->R_TRIG8.Q,)));
  RS_body__(&data__->RS3);
  __SET_VAR(data__->,SMALLBOX,,__GET_VAR(data__->RS3.Q1,));
  __SET_VAR(data__->R_TRIG9.,CLK,,__GET_LOCATED(data__->START,));
  R_TRIG_body__(&data__->R_TRIG9);
  __SET_VAR(data__->R_TRIG10.,CLK,,__GET_LOCATED(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG10);
  __SET_VAR(data__->R_TRIG11.,CLK,,__GET_LOCATED(data__->TURNTABLEFRONTLIMIT,));
  R_TRIG_body__(&data__->R_TRIG11);
  __SET_VAR(data__->RS4.,S,,__GET_VAR(data__->R_TRIG9.Q,));
  __SET_VAR(data__->RS4.,R1,,((!(__GET_LOCATED(data__->EMERGENCYSTOP,)) || __GET_VAR(data__->R_TRIG10.Q,)) || __GET_VAR(data__->R_TRIG11.Q,)));
  RS_body__(&data__->RS4);
  __SET_VAR(data__->F_TRIG4.,CLK,,__GET_LOCATED(data__->RETROREFLECT1,));
  F_TRIG_body__(&data__->F_TRIG4);
  __SET_VAR(data__->R_TRIG12.,CLK,,__GET_LOCATED(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG12);
  __SET_VAR(data__->R_TRIG13.,CLK,,__GET_LOCATED(data__->TURNTABLEFRONTLIMIT,));
  R_TRIG_body__(&data__->R_TRIG13);
  __SET_VAR(data__->RS5.,S,,(__GET_LOCATED(data__->EMERGENCYSTOP,) && (((__GET_VAR(data__->SMALLBOX,) && __GET_LOCATED(data__->TURNTABLELIMIT90,)) || (__GET_LOCATED(data__->TURNTABLE0TURN,) && __GET_VAR(data__->F_TRIG4.Q,))) || __GET_VAR(data__->RS4.Q1,))));
  __SET_VAR(data__->RS5.,R1,,((!(__GET_LOCATED(data__->EMERGENCYSTOP,)) || __GET_VAR(data__->R_TRIG12.Q,)) || __GET_VAR(data__->R_TRIG13.Q,)));
  RS_body__(&data__->RS5);
  __SET_LOCATED(data__->,TURNTABLE0ROLLPLUS,,__GET_VAR(data__->RS5.Q1,));
  __SET_VAR(data__->F_TRIG5.,CLK,,__GET_LOCATED(data__->TURNTABLE0ROLLPLUS,));
  F_TRIG_body__(&data__->F_TRIG5);
  __SET_VAR(data__->R_TRIG14.,CLK,,__GET_LOCATED(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG14);
  __SET_VAR(data__->R_TRIG15.,CLK,,__GET_LOCATED(data__->RETROREFLECT2,));
  R_TRIG_body__(&data__->R_TRIG15);
  __SET_VAR(data__->RS6.,S,,(__GET_VAR(data__->F_TRIG5.Q,) && __GET_VAR(data__->SMALLBOX,)));
  __SET_VAR(data__->RS6.,R1,,(__GET_VAR(data__->R_TRIG14.Q,) || __GET_VAR(data__->R_TRIG15.Q,)));
  RS_body__(&data__->RS6);
  __SET_VAR(data__->R_TRIG16.,CLK,,__GET_LOCATED(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG16);
  __SET_VAR(data__->R_TRIG17.,CLK,,__GET_LOCATED(data__->RETROREFLECT2,));
  R_TRIG_body__(&data__->R_TRIG17);
  __SET_VAR(data__->RS7.,S,,(__GET_LOCATED(data__->TURNTABLEFRONTLIMIT,) && __GET_VAR(data__->RS6.Q1,)));
  __SET_VAR(data__->RS7.,R1,,(__GET_VAR(data__->R_TRIG16.Q,) || __GET_VAR(data__->R_TRIG17.Q,)));
  RS_body__(&data__->RS7);
  __SET_LOCATED(data__->,TURNTABLE0TURN,,__GET_VAR(data__->RS7.Q1,));
  __SET_VAR(data__->R_TRIG18.,CLK,,__GET_LOCATED(data__->START,));
  R_TRIG_body__(&data__->R_TRIG18);
  __SET_VAR(data__->R_TRIG19.,CLK,,__GET_LOCATED(data__->RETROREFLECT3,));
  R_TRIG_body__(&data__->R_TRIG19);
  __SET_VAR(data__->R_TRIG20.,CLK,,__GET_LOCATED(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG20);
  __SET_VAR(data__->RS8.,S,,__GET_VAR(data__->R_TRIG18.Q,));
  __SET_VAR(data__->RS8.,R1,,((!(__GET_LOCATED(data__->EMERGENCYSTOP,)) || __GET_VAR(data__->R_TRIG19.Q,)) || __GET_VAR(data__->R_TRIG20.Q,)));
  RS_body__(&data__->RS8);
  __SET_VAR(data__->R_TRIG21.,CLK,,__GET_LOCATED(data__->RETROREFLECT3,));
  R_TRIG_body__(&data__->R_TRIG21);
  __SET_VAR(data__->R_TRIG22.,CLK,,__GET_LOCATED(data__->FACTORYIORESET,));
  R_TRIG_body__(&data__->R_TRIG22);
  __SET_VAR(data__->RS9.,S,,(__GET_LOCATED(data__->EMERGENCYSTOP,) && ((__GET_LOCATED(data__->TURNTABLELIMIT90,) && __GET_VAR(data__->SMALLBOX,)) || __GET_VAR(data__->RS8.Q1,))));
  __SET_VAR(data__->RS9.,R1,,((!(__GET_LOCATED(data__->EMERGENCYSTOP,)) || __GET_VAR(data__->R_TRIG21.Q,)) || __GET_VAR(data__->R_TRIG22.Q,)));
  RS_body__(&data__->RS9);
  __SET_LOCATED(data__->,CONVEYOR2,,__GET_VAR(data__->RS9.Q1,));

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





