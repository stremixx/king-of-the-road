
void __fastcall FUN_0057d750(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 500);
  puVar3 = (undefined4 *)(param_1 + 0xd08);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x254);
  puVar3 = (undefined4 *)(param_1 + 0xd38);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004e20b1((undefined4 *)(param_1 + 0x1a0),s_make_out_1_0067c0ec,0x43160000);
  *(undefined4 *)(param_1 + 0xce4) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0xce8) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0xd84) = *(undefined4 *)(param_1 + 0x378);
  *(undefined4 *)(param_1 + 0xcec) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0xcf0) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0xcf4) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0xcf8) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0xcfc) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0xd00) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 0xd04) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0xd68) = *(undefined4 *)(param_1 + 800);
  puVar2 = (undefined4 *)(param_1 + 500);
  puVar3 = (undefined4 *)(param_1 + 0xc64);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

