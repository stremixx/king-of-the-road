
void __thiscall
FUN_005b4380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,int param_7)

{
  int iVar1;
  
  if ((param_7 < 0) || (*(int *)(param_1 + 0x794) < param_7)) {
    FUN_005d2520(s_Sprite_have_illegal_material__0067dfe0,0);
  }
  iVar1 = *(int *)(param_1 + 0x2044) + param_7 * 0x7c;
  if ((*(byte *)(iVar1 + 0x20) & 0x10) != 0) {
    FUN_005b43f0(param_2,param_3,param_4,param_5,param_6,*(undefined4 *)(iVar1 + 0x3c));
  }
  return;
}

