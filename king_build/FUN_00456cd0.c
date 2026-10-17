
/* WARNING: Removing unreachable block (ram,0x00456dfb) */
/* WARNING: Removing unreachable block (ram,0x00456e10) */
/* WARNING: Removing unreachable block (ram,0x00456e05) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00456cd0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_3;
  puStack_8 = &LAB_0063ec80;
  puVar6 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_4 = 0;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  puVar1 = param_2;
  while (ExceptionList = ppvVar3, param_2 = puVar1, puVar1 != puVar2) {
    if ((((puVar1[0x15] != -1) &&
         (iVar4 = FUN_004d89a0(puVar1[0x15]), puVar6 = local_14, iVar4 != 0)) &&
        (((uint)puVar1[0x18] >> 2 & 1) == 0)) && (*(double *)(puVar1 + 0x56) < _DAT_0064a6c0)) {
      if (local_14 == (undefined4 *)0x0) {
        FUN_0045dd70(0,&param_2);
      }
      else {
        if (local_14 != (undefined4 *)0x0) {
          *local_14 = param_2;
        }
        local_14 = local_14 + 1;
        puVar6 = local_14;
      }
    }
    ppvVar3 = ExceptionList;
    puVar1 = (undefined4 *)*param_2;
  }
  *param_1 = 0;
  iVar4 = (int)puVar6 >> 2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar4 == 0) {
    iVar5 = 0;
    local_14 = puVar6;
  }
  else {
    iVar5 = FUN_0044b6e0(iVar4 * 4);
  }
  *param_1 = iVar5;
  param_1[1] = iVar5;
  param_1[2] = iVar5 + iVar4 * 4;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar4 = FUN_0046b5a0(0,local_14,iVar5,param_2);
  param_1[1] = iVar4;
  ExceptionList = local_c;
  return param_1;
}

