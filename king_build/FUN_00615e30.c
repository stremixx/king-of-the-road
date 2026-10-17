
void __thiscall FUN_00615e30(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4);
  if (param_3 == 3) {
    if ((*param_2 != 0) && (param_2[2] != 0)) {
      *(int *)(iVar1 + 0x9ca8) = *param_2;
      *(int *)(iVar1 + 0x9cac) = param_2[1];
      *(int *)(iVar1 + 0x9cb0) = param_2[2];
      *(undefined4 *)(*(int *)(iVar1 + 0x9ca8) + 0x30) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0x9cb0) + 0x30) = 0;
      goto LAB_00615ebc;
    }
  }
  FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
               s_C__Nek_VRAPPLVS_terrain_TMesh_in_00684d04,0x134,s_Mar_19_2002_006714f8);
  *(undefined4 *)(iVar1 + 0x9ca8) = 0;
  *(undefined4 *)(iVar1 + 0x9cb0) = 0;
LAB_00615ebc:
  if ((((param_1[0x15] != 0) && (param_1[0x16] != 0)) && (param_1[0x17] != 0)) &&
     ((param_1[0x18] != 0 && (param_1[0x19] != 0)))) {
    FUN_006167c0();
    FUN_006167c0();
    FUN_006167c0();
    FUN_006167c0();
    FUN_006167c0();
  }
  return;
}

