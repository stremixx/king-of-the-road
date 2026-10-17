
bool FUN_00507670(LPCSTR param_1,LPCSTR param_2,int param_3,undefined4 *param_4,LPCSTR param_5,
                 int param_6)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  char local_134 [100];
  byte local_d0 [196];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006455b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GetPrivateProfileStringA(param_1,param_2,&DAT_006719a8,(LPSTR)local_d0,100,param_5);
  pbVar6 = &DAT_006719a8;
  pbVar2 = local_d0;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_005076e6:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_005076eb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_005076e6;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005076eb:
  FUN_0063043c();
  local_4 = 0;
  if (0 < param_6) {
    param_3 = param_3 - (int)param_4;
    do {
      *param_4 = *(undefined4 *)(param_3 + (int)param_4);
      if ((((iVar3 != 0) && (iVar4 = FUN_00507330(), iVar4 != 0)) &&
          (&stack0x00000000 != (undefined1 *)0x134)) && (local_134[0] != '#')) {
        uVar5 = FUN_0061e066(local_134);
        *param_4 = uVar5;
        if (cRam00000000 != '\0') {
          FUN_0061c369(local_d0,s__s___s___s__Non_long_word___s___00673aa0,param_5,param_1);
          FUN_00507500(local_d0);
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
  return iVar3 != 0;
}

