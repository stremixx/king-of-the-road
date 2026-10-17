
undefined4 FUN_004402b0(uint param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar3 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0(s_getMerchandiseProperties_Merchan_0066ddb4);
  local_4 = 0;
  if (((int)param_1 < 0) || ((uint)((DAT_0068bc1c - DAT_0068bc18) / 0x68) <= param_1)) {
    FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,param_1);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x41c5,s_Invalid_id_0066bbf4,
                 s_MerchandiseId_0066dda4,&DAT_0077d3c0);
  }
  iVar1 = DAT_0068bc18 + param_1 * 0x68;
  param_2[2] = *(undefined4 *)(iVar1 + 0x30);
  param_2[4] = *(undefined4 *)(iVar1 + 0x10);
  param_2[5] = *(undefined4 *)(iVar1 + 0x14);
  param_2[6] = *(undefined4 *)(iVar1 + 0x18);
  param_2[7] = *(undefined4 *)(iVar1 + 0x1c);
  param_2[8] = *(undefined4 *)(iVar1 + 0x40);
  param_2[9] = *(undefined4 *)(iVar1 + 0x44);
  param_2[1] = *(undefined4 *)(iVar1 + 0x48);
  *param_2 = *(undefined4 *)(iVar1 + 0x58);
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_getMerchandiseProperties_Merchan_0066ddb4;
  cVar2 = s_getMerchandiseProperties_Merchan_0066ddb4[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar3;
    }
  }
  ExceptionList = local_c;
  return 0;
}

