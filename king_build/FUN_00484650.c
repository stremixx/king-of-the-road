
void FUN_00484650(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    FUN_0061d86c(param_2,s__NULL__0066f194);
    FUN_0061d86c(param_2,&DAT_0066b4e4);
    return;
  }
  FUN_0061d86c(param_2,s_0x_x_0066f18c,*(undefined4 *)(*(int *)param_1[0x1e] + 8));
  uVar1 = *(uint *)param_1[0x1d];
  uVar2 = *(uint *)param_1[0x1c];
  FUN_0061d86c(param_2,s____s_<___s__>__s___0066f178,
               -(uint)(uVar2 != ((uint *)param_1[0x1c])[1]) & uVar2,
               -(uint)(*param_1 != param_1[1]) & *param_1,
               -(uint)(uVar1 != ((uint *)param_1[0x1d])[1]) & uVar1);
  FUN_0061d86c(param_2,&DAT_0066b4e4);
  return;
}

