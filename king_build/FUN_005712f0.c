
int FUN_005712f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int in_stack_00000040;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_130;
  undefined1 local_12c [300];
  
  local_130 = 0x18a88;
  FUN_005685e0(&local_130);
  FUN_005e4740(local_130,param_2);
  iVar2 = FUN_005e4980(local_130);
  iVar1 = in_stack_00000040;
  if ((&DAT_006d1428)[in_stack_00000040 / 1000 + (in_stack_00000040 % 1000) * 0x174] == 0) {
    FUN_005d2520(s_Not_found_cluster_for_semitraile_00671b90,0);
    iVar2 = extraout_ECX;
  }
  else {
    *(undefined4 *)(iVar2 + 0x10) =
         *(undefined4 *)
          ((&DAT_006d1428)[in_stack_00000040 / 1000 + (in_stack_00000040 % 1000) * 0x174] + 0x10);
  }
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  FUN_0041ec60(iVar2,0,0,0,0);
  FUN_004cd6a0(iVar1,local_130 % 1000,param_3,&stack0x00000010,iVar2,uVar3,uVar4,uVar5,uVar6);
  FUN_005e48c0(local_130,param_2,300,local_12c);
  return local_130;
}

