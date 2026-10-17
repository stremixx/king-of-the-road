
void __thiscall FUN_005db3f0(int param_1,undefined4 *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_68 [12];
  undefined1 local_38 [52];
  
  iVar5 = 4;
  puVar4 = (undefined4 *)&stack0xffffff94;
  do {
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 3;
  } while (iVar5 != 0);
  uVar3 = *(undefined4 *)(param_1 + 0xb84);
  dVar1 = *(double *)(param_1 + 0xb88);
  dVar2 = *(double *)(param_1 + 0xb70);
  puVar4 = &DAT_00701550;
  puVar6 = local_68;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = (undefined4 *)
           FUN_005da010(local_38,*(undefined4 *)(param_1 + 0xb58),*(undefined4 *)(param_1 + 0xb5c),
                        *(undefined4 *)(param_1 + 0xb60),*(undefined4 *)(param_1 + 0xb64),
                        *(undefined4 *)(param_1 + 0xb68),*(undefined4 *)(param_1 + 0xb6c),
                        dVar1 + dVar2,*(undefined4 *)(param_1 + 0xb78),
                        *(undefined4 *)(param_1 + 0xb7c),*(undefined4 *)(param_1 + 0xb80),uVar3);
  puVar6 = local_68;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = (undefined4 *)FUN_005aba00(local_38,local_68);
  puVar6 = local_68;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = local_68;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

