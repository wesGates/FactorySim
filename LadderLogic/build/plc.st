TYPE
  LOGLEVEL : (CRITICAL, WARNING, INFO, DEBUG) := INFO;
END_TYPE

FUNCTION_BLOCK LOGGER
  VAR_INPUT
    TRIG : BOOL;
    MSG : STRING;
    LEVEL : LOGLEVEL := INFO;
  END_VAR
  VAR
    TRIG0 : BOOL;
  END_VAR

  IF TRIG AND NOT TRIG0 THEN
  {{
   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  }}
  END_IF;
  TRIG0:=TRIG;
END_FUNCTION_BLOCK



FUNCTION_BLOCK python_eval
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_poll
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_gear
  VAR_INPUT
    N : UINT;
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    py_eval : python_eval;
    COUNTER : UINT;
    _TMP_ADD10_OUT : UINT;
    _TMP_EQ13_OUT : BOOL;
    _TMP_SEL15_OUT : UINT;
    _TMP_AND7_OUT : BOOL;
  END_VAR

  _TMP_ADD10_OUT := ADD(COUNTER, 1);
  _TMP_EQ13_OUT := EQ(N, _TMP_ADD10_OUT);
  _TMP_SEL15_OUT := SEL(_TMP_EQ13_OUT, _TMP_ADD10_OUT, 0);
  COUNTER := _TMP_SEL15_OUT;
  _TMP_AND7_OUT := AND(_TMP_EQ13_OUT, TRIG);
  py_eval(TRIG := _TMP_AND7_OUT, CODE := CODE);
  ACK := py_eval.ACK;
  RESULT := py_eval.RESULT;
END_FUNCTION_BLOCK


PROGRAM program0
  VAR
    FactoryIOReset AT %IX100.0 : BOOL;
    Start AT %IX100.1 : BOOL := 1;
    EmergencyStop AT %IX100.2 : BOOL;
    RetroReflect0 AT %IX100.3 : BOOL;
    RetroReflect1 AT %IX100.4 : BOOL;
    RetroReflect2 AT %IX100.5 : BOOL;
    RetroReflect3 AT %IX100.6 : BOOL;
    TurntableBackLimit AT %IX100.7 : BOOL;
    TurntableFrontLimit AT %IX101.0 : BOOL;
    TurntableLimit0 AT %IX101.1 : BOOL;
    TurntableLimit90 AT %IX101.2 : BOOL;
    LightArray7 AT %IX101.3 : BOOL;
    Conveyor1 AT %QX100.0 : BOOL;
    Turntable0RollPlus AT %QX100.1 : BOOL;
    Turntable0Turn AT %QX100.2 : BOOL;
    Conveyor2 AT %QX100.3 : BOOL;
  END_VAR
  VAR
    RS0 : RS;
    RS1 : RS;
    RS2 : RS;
  END_VAR
  VAR_IN_OUT
    SmallBox : BOOL;
  END_VAR
  VAR
    RS3 : RS;
    RS4 : RS;
    RS5 : RS;
    RS6 : RS;
    RS7 : RS;
    RS8 : RS;
    RS9 : RS;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    R_TRIG3 : R_TRIG;
    R_TRIG4 : R_TRIG;
    F_TRIG1 : F_TRIG;
    R_TRIG5 : R_TRIG;
    R_TRIG6 : R_TRIG;
    R_TRIG7 : R_TRIG;
    F_TRIG2 : F_TRIG;
    R_TRIG8 : R_TRIG;
    F_TRIG3 : F_TRIG;
    R_TRIG9 : R_TRIG;
    R_TRIG10 : R_TRIG;
    R_TRIG11 : R_TRIG;
    F_TRIG4 : F_TRIG;
    R_TRIG12 : R_TRIG;
    R_TRIG13 : R_TRIG;
    F_TRIG5 : F_TRIG;
    R_TRIG14 : R_TRIG;
    R_TRIG15 : R_TRIG;
    R_TRIG16 : R_TRIG;
    R_TRIG17 : R_TRIG;
    R_TRIG18 : R_TRIG;
    R_TRIG19 : R_TRIG;
    R_TRIG20 : R_TRIG;
    R_TRIG21 : R_TRIG;
    R_TRIG22 : R_TRIG;
  END_VAR

  R_TRIG1(CLK := Start);
  R_TRIG2(CLK := FactoryIOReset);
  RS0(S := R_TRIG1.Q, R1 := NOT(EmergencyStop) OR R_TRIG2.Q);
  R_TRIG3(CLK := FactoryIOReset);
  R_TRIG4(CLK := TurntableFrontLimit);
  F_TRIG1(CLK := RetroReflect1);
  R_TRIG5(CLK := TurntableBackLimit);
  R_TRIG6(CLK := RetroReflect2);
  R_TRIG7(CLK := FactoryIOReset);
  RS2(S := R_TRIG5.Q, R1 := NOT(EmergencyStop) OR R_TRIG6.Q OR R_TRIG7.Q);
  RS1(S := EmergencyStop AND NOT(FactoryIOReset) AND TurntableLimit0 AND RS0.Q1, R1 := NOT(RetroReflect0) AND (F_TRIG1.Q OR RS2.Q1 OR R_TRIG4.Q) OR NOT(EmergencyStop) OR R_TRIG3.Q);
  Conveyor1 := RS1.Q1;
  F_TRIG2(CLK := RetroReflect1);
  R_TRIG8(CLK := FactoryIOReset);
  F_TRIG3(CLK := RetroReflect2);
  RS3(S := F_TRIG2.Q AND LightArray7, R1 := F_TRIG3.Q OR NOT(EmergencyStop) OR R_TRIG8.Q);
  SmallBox := RS3.Q1;
  R_TRIG9(CLK := Start);
  R_TRIG10(CLK := FactoryIOReset);
  R_TRIG11(CLK := TurntableFrontLimit);
  RS4(S := R_TRIG9.Q, R1 := NOT(EmergencyStop) OR R_TRIG10.Q OR R_TRIG11.Q);
  F_TRIG4(CLK := RetroReflect1);
  R_TRIG12(CLK := FactoryIOReset);
  R_TRIG13(CLK := TurntableFrontLimit);
  RS5(S := EmergencyStop AND (SmallBox AND TurntableLimit90 OR Turntable0Turn AND F_TRIG4.Q OR RS4.Q1), R1 := NOT(EmergencyStop) OR R_TRIG12.Q OR R_TRIG13.Q);
  Turntable0RollPlus := RS5.Q1;
  F_TRIG5(CLK := Turntable0RollPlus);
  R_TRIG14(CLK := FactoryIOReset);
  R_TRIG15(CLK := RetroReflect2);
  RS6(S := F_TRIG5.Q AND SmallBox, R1 := R_TRIG14.Q OR R_TRIG15.Q);
  R_TRIG16(CLK := FactoryIOReset);
  R_TRIG17(CLK := RetroReflect2);
  RS7(S := TurntableFrontLimit AND RS6.Q1, R1 := R_TRIG16.Q OR R_TRIG17.Q);
  Turntable0Turn := RS7.Q1;
  R_TRIG18(CLK := Start);
  R_TRIG19(CLK := RetroReflect3);
  R_TRIG20(CLK := FactoryIOReset);
  RS8(S := R_TRIG18.Q, R1 := NOT(EmergencyStop) OR R_TRIG19.Q OR R_TRIG20.Q);
  R_TRIG21(CLK := RetroReflect3);
  R_TRIG22(CLK := FactoryIOReset);
  RS9(S := EmergencyStop AND (TurntableLimit90 AND SmallBox OR RS8.Q1), R1 := NOT(EmergencyStop) OR R_TRIG21.Q OR R_TRIG22.Q);
  Conveyor2 := RS9.Q1;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
