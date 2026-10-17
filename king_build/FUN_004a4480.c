
void __fastcall FUN_004a4480(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void **ppvVar3;
  LONG LVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00642d28;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar3 = &local_c;
  if (param_1[1] != 0) {
    ppvVar3 = &local_c;
    iVar8 = *(int *)(*param_1 + 4);
    while (ExceptionList = ppvVar3, iVar8 != 0) {
      FUN_004a4c40(*(undefined4 *)(iVar8 + 0xc));
      iVar6 = *(int *)(iVar8 + 8);
      FUN_004a5440(0);
      FUN_0044b440(iVar8,0x2c);
      ppvVar3 = ExceptionList;
      iVar8 = iVar6;
    }
    *(int *)(*param_1 + 8) = *param_1;
    *(undefined4 *)(*param_1 + 4) = 0;
    *(int *)(*param_1 + 0xc) = *param_1;
    param_1[1] = 0;
    ppvVar3 = ExceptionList;
  }
  ExceptionList = ppvVar3;
  puVar1 = (undefined4 *)*param_1;
  LVar4 = InterlockedExchange(&DAT_0068c164,1);
  uVar2 = DAT_0066b83c;
  if (LVar4 != 0) {
    uVar5 = 0;
    if (DAT_0066b83c != 0) {
      uVar7 = DAT_0068c168 >> 1;
      do {
        if (((uVar7 <= uVar5) && (DAT_0068c164 == 0)) &&
           (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 == 0)) {
          DAT_0066b83c = 1000;
          DAT_0068c168 = uVar5;
          goto LAB_004a45d8;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    DAT_0066b83c = 0x1e;
    iVar8 = 6;
    while( true ) {
      iVar6 = iVar8;
      if (0x1b < iVar8) {
        iVar6 = 0x1b;
      }
      LVar4 = InterlockedExchange(&DAT_0068c164,1);
      if (LVar4 == 0) break;
      if (iVar6 < 0x15) {
        Sleep(0);
        iVar8 = iVar8 + 1;
      }
      else {
        Sleep(1 << ((char)iVar6 - 0x14U & 0x1f));
        iVar8 = iVar8 + 1;
      }
    }
  }
LAB_004a45d8:
  *puVar1 = DAT_0068c138;
  DAT_0068c138 = puVar1;
  DAT_0068c164 = 0;
  ExceptionList = local_c;
  return;
}

