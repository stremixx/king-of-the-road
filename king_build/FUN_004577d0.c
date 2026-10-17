
/* WARNING: Removing unreachable block (ram,0x00457935) */
/* WARNING: Removing unreachable block (ram,0x0045794a) */
/* WARNING: Removing unreachable block (ram,0x0045793f) */

int * FUN_004577d0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  void **ppvVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_3;
  puStack_8 = &LAB_0063ed30;
  local_14 = (undefined4 *)0x0;
  local_4 = 0;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  do {
    ExceptionList = ppvVar2;
    if (param_2 == piVar1) {
      *param_1 = 0;
      iVar5 = (int)local_14 >> 2;
      param_1[1] = 0;
      param_1[2] = 0;
      if (iVar5 == 0) {
        puStack_34 = (undefined4 *)0x0;
      }
      else {
        piStack_30 = (int *)(iVar5 * 4);
        puStack_34 = (undefined4 *)0x4578f8;
        puStack_34 = (undefined4 *)FUN_0044b6e0();
      }
      *param_1 = (int)puStack_34;
      param_1[1] = (int)puStack_34;
      param_1[2] = (int)puStack_34 + iVar5 * 4;
      local_4 = CONCAT31(local_4._1_3_,1);
      piStack_30 = param_2;
      iStack_3c = 0;
      puStack_38 = local_14;
      iVar5 = FUN_0046b5a0();
      param_1[1] = iVar5;
      ExceptionList = local_c;
      return param_1;
    }
    iVar5 = *param_2;
    piStack_30 = (int *)0x2;
    param_3 = &iStack_3c;
    FUN_004489a0(iVar5 + 0x24);
    cVar3 = FUN_00415690();
    if (cVar3 == '\0') {
      puVar4 = (undefined4 *)(iVar5 + 8);
      piStack_30 = (int *)s_BMW_M5_1_0066e4cc;
      puStack_38 = (undefined4 *)0x457848;
      puStack_34 = puVar4;
      cVar3 = FUN_004b6670();
      if (cVar3 != '\0') goto LAB_00457885;
      piStack_30 = (int *)s_BMW_M5_2_0066e4c0;
      puStack_38 = (undefined4 *)0x45785a;
      puStack_34 = puVar4;
      cVar3 = FUN_004b6670();
      if (cVar3 != '\0') goto LAB_00457885;
      piStack_30 = (int *)s_BMW_M5_3_0066e4b4;
      puStack_38 = (undefined4 *)0x45786c;
      puStack_34 = puVar4;
      cVar3 = FUN_004b6670();
      if (cVar3 != '\0') goto LAB_00457885;
      piStack_30 = (int *)s_BMW_M5_4_0066e4a8;
      puStack_38 = (undefined4 *)0x45787e;
      puStack_34 = puVar4;
      cVar3 = FUN_004b6670();
      if (cVar3 != '\0') goto LAB_00457885;
    }
    else {
LAB_00457885:
      if (local_14 == (undefined4 *)0x0) {
        piStack_30 = (int *)&param_2;
        puStack_38 = (undefined4 *)0x4578b7;
        puStack_34 = local_14;
        FUN_0045ca90();
      }
      else {
        if (local_14 != (undefined4 *)0x0) {
          *local_14 = param_2;
        }
        local_14 = local_14 + 1;
      }
    }
    param_2 = param_2 + 1;
    ppvVar2 = ExceptionList;
  } while( true );
}

