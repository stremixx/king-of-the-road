
bool FUN_0063a8bc(void)

{
  UINT CodePage;
  _cpinfo *lpCPInfo;
  _cpinfo local_18;
  
  lpCPInfo = &local_18;
  CodePage = GetOEMCP();
  GetCPInfo(CodePage,lpCPInfo);
  return 1 < local_18.MaxCharSize;
}

