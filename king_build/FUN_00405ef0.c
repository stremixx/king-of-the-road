
void FUN_00405ef0(void)

{
  void **ppvVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_44 [5];
  int *piStack_30;
  int local_1c;
  int local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063b10b;
  local_14 = ExceptionList;
  piVar2 = (int *)*DAT_0068beb8;
  ExceptionList = &local_14;
  ppvVar1 = &local_14;
  if (piVar2 != DAT_0068beb8) {
    do {
      piVar4 = piVar2 + 4;
      piVar5 = aiStack_44;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      local_1c = FUN_00405930();
      if ((local_1c == 0) && ((piVar2[0xc] - piVar2[0xb]) / 0xc != 2)) {
        piStack_30 = (int *)0xd0;
        aiStack_44[4] = 0x405f76;
        local_18 = FUN_00631d33();
        local_c = 0;
        if (local_18 == 0) {
          local_1c = 0;
        }
        else {
          piStack_30 = (int *)s_anode_0066b920;
          aiStack_44[4] = 0x405f95;
          piStack_30 = (int *)FUN_004030b0();
          aiStack_44[4] = 0x405fa0;
          local_1c = FUN_00470a10();
        }
        local_c = 0xffffffff;
        if (DAT_0068be64 == DAT_0068be68) {
          piStack_30 = &local_1c;
          aiStack_44[4] = DAT_0068be64;
          aiStack_44[3] = 0x405fec;
          FUN_0044cb90();
        }
        else {
          piStack_30 = &local_1c;
          aiStack_44[4] = DAT_0068be64;
          aiStack_44[3] = 0x405fca;
          FUN_00460970();
          DAT_0068be64 = DAT_0068be64 + 4;
        }
        *(int *)(local_1c + 0xb8) = piVar2[0xe];
        *(int *)(local_1c + 0xbc) = piVar2[0xf];
        *(undefined8 *)(local_1c + 0x30) = *(undefined8 *)(piVar2 + 4);
        *(undefined8 *)(local_1c + 0x38) = *(undefined8 *)(piVar2 + 6);
        *(undefined8 *)(local_1c + 0x40) = *(undefined8 *)(piVar2 + 8);
      }
      piVar2[10] = local_1c;
      piVar2 = (int *)*piVar2;
      ppvVar1 = ExceptionList;
    } while (piVar2 != DAT_0068beb8);
  }
  do {
    ExceptionList = ppvVar1;
    piVar2 = (int *)*DAT_0068beb8;
    if (piVar2 == DAT_0068beb8) {
      ExceptionList = local_14;
      return;
    }
    while ((piVar2[2] != 0 || (piVar2[10] == 0))) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == DAT_0068beb8) {
        ExceptionList = local_14;
        return;
      }
    }
    piStack_30 = piVar2 + 2;
    aiStack_44[4] = 0x40605a;
    FUN_00405b50();
    ppvVar1 = ExceptionList;
  } while( true );
}

