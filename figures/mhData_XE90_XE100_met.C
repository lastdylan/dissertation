void mhData_XE90_XE100_met()
{
//=========Macro generated from canvas: all_mhData_/all_mhData_
//=========  (Fri Aug 19 08:52:47 2016) by ROOT version6.04/12
   TCanvas *all_mhData_ = new TCanvas("all_mhData_", "all_mhData_",0,0,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   all_mhData_->SetHighLightColor(2);
   all_mhData_->Range(0,0,1,1);
   all_mhData_->SetFillColor(0);
   all_mhData_->SetBorderMode(0);
   all_mhData_->SetBorderSize(2);
   all_mhData_->SetLeftMargin(0);
   all_mhData_->SetRightMargin(0);
   all_mhData_->SetTopMargin(0);
   all_mhData_->SetBottomMargin(0);
   all_mhData_->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: main
   TPad *main = new TPad("main", "main",0,0,1,1);
   main->Draw();
   main->cd();
   main->Range(-111.3924,-0.3240506,584.8101,1.701266);
   main->SetFillColor(0);
   main->SetFillStyle(4000);
   main->SetBorderMode(0);
   main->SetBorderSize(0);
   main->SetTickx(1);
   main->SetTicky(1);
   main->SetLeftMargin(0.16);
   main->SetRightMargin(0.05);
   main->SetTopMargin(0.05);
   main->SetBottomMargin(0.16);
   main->SetFrameBorderMode(0);
   main->SetFrameBorderMode(0);
   
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fx3001[16] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   260,
   310,
   370,
   450};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fy3001[16] = {
   0.005242464,
   0.009776536,
   0.03831118,
   0.09484778,
   0.238193,
   0.4312268,
   0.6707317,
   0.8137255,
   0.8,
   0.8571429,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_felx3001[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fely3001[16] = {
   0.002236751,
   0.002389374,
   0.005135916,
   0.009714625,
   0.01892466,
   0.0299348,
   0.03719893,
   0.04033413,
   0.07175807,
   0.05889125,
   0.05323778,
   0.07373067,
   0.1513615,
   0.119839,
   0.1085317,
   0.4369725};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fehx3001[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fehy3001[16] = {
   0.003133659,
   0.00285077,
   0.005618515,
   0.01034755,
   0.01964007,
   0.03027387,
   0.03582349,
   0.03628313,
   0.0607665,
   0.04783715,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE90mht_fx3001,effErrorGraph_hist_data_CutTriggerXE90mht_fy3001,effErrorGraph_hist_data_CutTriggerXE90mht_felx3001,effErrorGraph_hist_data_CutTriggerXE90mht_fehx3001,effErrorGraph_hist_data_CutTriggerXE90mht_fely3001,effErrorGraph_hist_data_CutTriggerXE90mht_fehy3001);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE90mht");
   grae->SetTitle("XE90");
   grae->SetFillColor(1);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001 = new TH1F("Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001","XE90",100,0,550);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->SetMinimum(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->SetMaximum(1.6);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->SetDirectory(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->SetLineColor(ci);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetXaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetXaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetXaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetXaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetYaxis()->SetTitle("Efficiency");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetYaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetYaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetYaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetYaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetZaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetZaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetZaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht3001);
   
   grae->Draw("apz");
   
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fx3002[16] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   260,
   310,
   370,
   450};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fy3002[16] = {
   0.005242464,
   0.009776536,
   0.03831118,
   0.09484778,
   0.238193,
   0.4312268,
   0.6707317,
   0.8137255,
   0.8,
   0.8571429,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_felx3002[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fely3002[16] = {
   0.002236751,
   0.002389374,
   0.005135916,
   0.009714625,
   0.01892466,
   0.0299348,
   0.03719893,
   0.04033413,
   0.07175807,
   0.05889125,
   0.05323778,
   0.07373067,
   0.1513615,
   0.119839,
   0.1085317,
   0.4369725};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fehx3002[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE90mht_fehy3002[16] = {
   0.003133659,
   0.00285077,
   0.005618515,
   0.01034755,
   0.01964007,
   0.03027387,
   0.03582349,
   0.03628313,
   0.0607665,
   0.04783715,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE90mht_fx3002,effErrorGraph_hist_data_CutTriggerXE90mht_fy3002,effErrorGraph_hist_data_CutTriggerXE90mht_felx3002,effErrorGraph_hist_data_CutTriggerXE90mht_fehx3002,effErrorGraph_hist_data_CutTriggerXE90mht_fely3002,effErrorGraph_hist_data_CutTriggerXE90mht_fehy3002);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE90mht");
   grae->SetTitle("XE90");
   grae->SetFillColor(1);
   grae->SetLineColor(3);
   grae->SetMarkerColor(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002 = new TH1F("Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002","XE90",100,0,550);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->SetMinimum(0);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->SetMaximum(1.6);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->SetDirectory(0);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->SetLineColor(ci);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_h_effErrorGraph_hist_data_CutTriggerXE90mht30013002);
   
   grae->Draw("pz ");
   
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fx3003[16] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   260,
   310,
   370,
   450};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fy3003[16] = {
   0.002621232,
   0.002793296,
   0.007818608,
   0.01405152,
   0.03696099,
   0.09665428,
   0.1158537,
   0.3235294,
   0.5428571,
   0.6904762,
   0.85,
   0.8571429,
   1,
   0.875,
   1,
   1};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_felx3003[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fely3003[16] = {
   0.001486985,
   0.001193214,
   0.002228918,
   0.003677751,
   0.007947101,
   0.0170178,
   0.02339848,
   0.04479513,
   0.08272624,
   0.0727679,
   0.08880476,
   0.1061272,
   0.1513615,
   0.1397325,
   0.1085317,
   0.4369725};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fehx3003[16] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   20,
   30,
   30,
   50};
   Double_t effErrorGraph_hist_data_CutTriggerXE100_fehy3003[16] = {
   0.002422537,
   0.001674133,
   0.002749763,
   0.004445269,
   0.009221538,
   0.01901488,
   0.02650861,
   0.04706676,
   0.0811715,
   0.06694806,
   0.06673108,
   0.07456033,
   0,
   0.08367334,
   0,
   0};
   grae = new TGraphAsymmErrors(16,effErrorGraph_hist_data_CutTriggerXE100_fx3003,effErrorGraph_hist_data_CutTriggerXE100_fy3003,effErrorGraph_hist_data_CutTriggerXE100_felx3003,effErrorGraph_hist_data_CutTriggerXE100_fehx3003,effErrorGraph_hist_data_CutTriggerXE100_fely3003,effErrorGraph_hist_data_CutTriggerXE100_fehy3003);
   grae->SetName("effErrorGraph_hist_data_CutTriggerXE100");
   grae->SetTitle("XE100");
   grae->SetFillColor(1);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003 = new TH1F("Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003","XE100",100,0,550);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->SetMinimum(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->SetMaximum(1.6);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->SetDirectory(0);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->SetLineColor(ci);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetXaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetXaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetXaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetXaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetYaxis()->SetTitle("Efficiency");
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetYaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetYaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetYaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetYaxis()->SetTitleFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetZaxis()->SetLabelFont(42);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetZaxis()->SetLabelSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetZaxis()->SetTitleSize(0.05);
   Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_effErrorGraph_hist_data_CutTriggerXE1003003);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.56,0.8,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("effErrorGraph_hist_data_CutTriggerXE90mht","HLT_xe90_mht_L1XE50","lp");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("effErrorGraph_hist_data_CutTriggerXE100","HLT_xe100","lp");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.2,0.86,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(72);
   tex->SetTextSize(0.0625);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.36,0.86,"Internal");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.0625);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.8,"#sqrt{s} = 13 TeV, 5.5 fb^{-1}, Data 2016");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.0425);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *h_effErrorGraph_hist_data_CutTriggerXE90mht_copy = new TH1F("h_effErrorGraph_hist_data_CutTriggerXE90mht_copy","XE90",100,0,550);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->SetMinimum(0);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->SetMaximum(1.6);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->SetDirectory(0);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->SetStats(0);

   ci = TColor::GetColor("#000099");
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->SetLineColor(ci);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetXaxis()->SetLabelFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetXaxis()->SetLabelSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetXaxis()->SetTitleSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetXaxis()->SetTitleFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetYaxis()->SetTitle("Efficiency");
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetYaxis()->SetLabelFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetYaxis()->SetLabelSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetYaxis()->SetTitleSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetYaxis()->SetTitleFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetZaxis()->SetLabelFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetZaxis()->SetLabelSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetZaxis()->SetTitleSize(0.05);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->GetZaxis()->SetTitleFont(42);
   h_effErrorGraph_hist_data_CutTriggerXE90mht_copy->Draw("sameaxis");
   main->Modified();
   all_mhData_->cd();
   all_mhData_->Modified();
   all_mhData_->cd();
   all_mhData_->SetSelected(all_mhData_);
}
