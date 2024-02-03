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
    LightArray7SmallBox AT %IX101.3 : BOOL;
    RetroReflect4 AT %IX101.4 : BOOL;
    DiffuseSensor0 AT %IX101.5 : BOOL;
    Convey6m_0 AT %QX100.0 : BOOL;
    Turntable0RollPlus AT %QX100.1 : BOOL;
    Turntable0Turn AT %QX100.2 : BOOL;
    Convey6m_1 AT %QX100.3 : BOOL;
  END_VAR
  VAR
    RS0 : RS;
    RS1 : RS;
    RS2 : RS;
  END_VAR
  VAR_IN_OUT
    SmallBox : BOOL;
    Material : BOOL;
  END_VAR
  VAR
    RS3 : RS;
    RS4 : RS;
    RS5 : RS;
    RS6 : RS;
    RS7 : RS;
    RS8 : RS;
    RS9 : RS;
  END_VAR
  VAR
    StackLightGreen AT %QX100.4 : BOOL;
    StackLightYellow AT %QX100.5 : BOOL;
    StackLightRed AT %QX100.6 : BOOL;
  END_VAR
  VAR
    RS10 : RS;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    R_TRIG3 : R_TRIG;
    F_TRIG1 : F_TRIG;
    R_TRIG4 : R_TRIG;
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
    F_TRIG6 : F_TRIG;
    R_TRIG23 : R_TRIG;
    R_TRIG24 : R_TRIG;
    R_TRIG25 : R_TRIG;
  END_VAR

  R_TRIG1(CLK := FactoryIOReset);
  RS0(S := Start, R1 := NOT(EmergencyStop) OR R_TRIG1.Q);
  R_TRIG2(CLK := FactoryIOReset);
  R_TRIG3(CLK := TurntableFrontLimit);
  F_TRIG1(CLK := RetroReflect1);
  R_TRIG4(CLK := TurntableBackLimit);
  R_TRIG5(CLK := RetroReflect2);
  R_TRIG6(CLK := FactoryIOReset);
  R_TRIG7(CLK := RetroReflect4);
  RS2(S := R_TRIG4.Q, R1 := NOT(EmergencyStop) OR R_TRIG5.Q OR R_TRIG6.Q OR R_TRIG7.Q);
  RS1(S := EmergencyStop AND NOT(FactoryIOReset) AND TurntableLimit0 AND RS0.Q1, R1 := NOT(RetroReflect0) AND (F_TRIG1.Q OR RS2.Q1 OR R_TRIG3.Q) OR NOT(EmergencyStop) OR R_TRIG2.Q);
  Convey6m_0 := RS1.Q1;
  StackLightGreen := RS1.Q1;
  StackLightRed := NOT(RS1.Q1);
  F_TRIG2(CLK := RetroReflect1);
  R_TRIG8(CLK := FactoryIOReset);
  F_TRIG3(CLK := RetroReflect2);
  RS3(S := F_TRIG2.Q AND LightArray7SmallBox, R1 := F_TRIG3.Q OR NOT(EmergencyStop) OR R_TRIG8.Q);
  SmallBox := RS3.Q1;
  R_TRIG9(CLK := Start);
  R_TRIG10(CLK := FactoryIOReset);
  R_TRIG11(CLK := TurntableFrontLimit);
  RS4(S := R_TRIG9.Q, R1 := NOT(EmergencyStop) OR R_TRIG10.Q OR R_TRIG11.Q);
  F_TRIG4(CLK := RetroReflect1);
  R_TRIG12(CLK := FactoryIOReset);
  R_TRIG13(CLK := TurntableFrontLimit);
  RS5(S := EmergencyStop AND (Material AND TurntableLimit0 OR SmallBox AND TurntableLimit90 OR Turntable0Turn AND F_TRIG4.Q OR RS4.Q1), R1 := NOT(EmergencyStop) OR R_TRIG12.Q OR R_TRIG13.Q);
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
  Convey6m_1 := RS9.Q1;
  F_TRIG6(CLK := RetroReflect1);
  R_TRIG23(CLK := FactoryIOReset);
  R_TRIG24(CLK := RetroReflect2);
  R_TRIG25(CLK := RetroReflect4);
  RS10(S := F_TRIG6.Q AND NOT(LightArray7SmallBox), R1 := NOT(EmergencyStop) OR R_TRIG23.Q OR R_TRIG24.Q OR R_TRIG25.Q);
  Material := RS10.Q1;
  StackLightYellow := RS10.Q1;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
