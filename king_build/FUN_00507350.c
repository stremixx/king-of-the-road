
int FUN_00507350(LPCSTR param_1,LPCSTR param_2,int param_3,float *param_4,LPCSTR param_5,int param_6
                )

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  float10 fVar7;
  byte local_134 [104];
  char local_cc;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GetPrivateProfileStringA(param_1,param_2,&DAT_006719a8,(LPSTR)local_134,100,param_5);
  pbVar5 = &DAT_006719a8;
  pbVar2 = local_134;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_005073c2:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_005073c7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_005073c2;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005073c7:
  if ((iVar3 == 0) || (local_134[0] == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  FUN_0063043c();
  local_4 = 0;
  if (0 < param_6) {
    param_3 = param_3 - (int)param_4;
    do {
      *param_4 = *(float *)(param_3 + (int)param_4);
      if ((((iVar3 != 0) && (iVar4 = FUN_00507330(), iVar4 != 0)) &&
          (&stack0x00000000 != (undefined1 *)0xcc)) && (local_cc != '#')) {
        fVar7 = (float10)FUN_0061efbc();
        *param_4 = (float)fVar7;
        if (cRam00000000 != '\0') {
          FUN_0061c369(local_134,s__s___s___s__Non_float_word___s___00673a74,param_5,param_1);
          FUN_00507500(local_134);
        }
      }
      param_4 = param_4 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  local_4 = 0xffffffff;
  FUN_006304f2();
  FUN_0062fc10();
  ExceptionList = local_c;
  return iVar3;
}

