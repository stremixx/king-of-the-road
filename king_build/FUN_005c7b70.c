
int FUN_005c7b70(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_104 [4];
  undefined1 local_100 [256];
  
  FUN_0061c369(&DAT_0070ccf0,s_tree_d_0067deb0,param_2);
  iVar1 = FUN_005eeb70(&DAT_0070ccf0,*(undefined4 *)(param_1 + 0x24),local_104);
  if (iVar1 == 0) {
    FUN_0061c369(local_100,s__Tree_material__s_not_found_in_m_0067e897 + 1,&DAT_0070ccf0,
                 *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x3c));
    FUN_005d2520(local_100,0);
  }
  return iVar1;
}

