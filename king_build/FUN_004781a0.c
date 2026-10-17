
void FUN_004781a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char **ppcVar3;
  undefined4 *puVar4;
  char *apcStack_48 [4];
  undefined4 uStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x4c)) &&
     (((*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c) ||
       (iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + -0x24), iVar1 == -1)) ||
      (iVar1 != *(int *)(*(int *)(param_1 + 0x1c) + -0xc))))) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x4c) + -0x28);
    ppcVar3 = apcStack_48;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppcVar3 = (char *)*puVar2;
      puVar2 = puVar2 + 1;
      ppcVar3 = ppcVar3 + 1;
    }
    FUN_0041d3f0(&param_1);
    FUN_004873f0(iVar1);
    if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x4c) + -0x28);
      ppcVar3 = apcStack_48;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *ppcVar3 = (char *)*puVar2;
        puVar2 = puVar2 + 1;
        ppcVar3 = ppcVar3 + 1;
      }
      FUN_0041d3f0(&param_1);
      FUN_004873f0(iVar1);
    }
    iStack_30 = *(int *)(param_1 + 0x18);
    if (iStack_30 == *(int *)(param_1 + 0x1c)) {
      uStack_2c = 0;
      puStack_34 = &param_1;
      uStack_38 = 0x478255;
      FUN_0041d3f0();
      puStack_34 = (undefined4 *)0x47825a;
      iStack_30 = FUN_004365b0();
      puStack_34 = (undefined4 *)0x478263;
      FUN_005d2250();
      iVar1 = *(int *)(param_1 + 0x4c);
      uStack_2c = *(undefined4 *)(iVar1 + -0x10);
      iStack_30 = *(undefined4 *)(iVar1 + -0x14);
      puStack_34 = *(undefined4 **)(iVar1 + -0x18);
      uStack_38 = *(undefined4 *)(iVar1 + -0x1c);
      apcStack_48[3] = *(char **)(iVar1 + -0x20);
      apcStack_48[2] = *(char **)(iVar1 + -0x28);
      apcStack_48[1] = s___d__g__d__d__x__0066bc0c;
      apcStack_48[0] = &DAT_0077d640;
      FUN_0061c369();
      FUN_005d2250(&DAT_0077d640,0);
      puVar2 = (undefined4 *)(param_1 + 0x28);
      puVar4 = local_20;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uStack_2c = local_8;
      iStack_30 = local_c;
      puStack_34 = (undefined4 *)local_10;
      uStack_38 = local_20[3];
      apcStack_48[3] = (char *)local_20[2];
      apcStack_48[2] = (char *)local_20[0];
      apcStack_48[1] = s___d__g__d__d__x__0066bc0c;
      apcStack_48[0] = &DAT_0077d640;
      FUN_0061c369();
      FUN_005d2250(&DAT_0077d640,0);
    }
  }
  return;
}

