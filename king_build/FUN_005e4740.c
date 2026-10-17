
undefined4 __thiscall FUN_005e4740(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_c [12];
  
  iVar1 = param_2 / 1000;
  iVar4 = param_2 % 1000;
  if (399 < iVar1) {
    FUN_005d2520(s_Index_of_class_anmobj__too_large_0068228c,0);
  }
  if (*(int *)(param_1 + iVar1 * 4) == 0) {
    return 0xffffffff;
  }
  if (499 < iVar4) {
    FUN_0061c369(local_c,s_n__d_006822d0,param_2);
    FUN_005d2520(s_Index_of_obj_anmobj__too_large_006822b0,local_c);
  }
  if (*(int *)(*(int *)(param_1 + iVar1 * 4) + iVar4 * 4) == 0) {
    iVar2 = FUN_00631d33(0x20);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_005e3c80(param_2,param_3);
    }
    *(undefined4 **)(*(int *)(param_1 + iVar1 * 4) + iVar4 * 4) = puVar3;
    FUN_005e4a30(param_3,puVar3);
    return *puVar3;
  }
  return 0xfffffffe;
}

