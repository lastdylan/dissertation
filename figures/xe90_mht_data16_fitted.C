void xe90_mht_data16_fitted()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 19 15:08:33 2016) by ROOT version6.06/04
   TCanvas *c1 = new TCanvas("c1", "c1",0,45,800,692);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.16);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-95.42169,0.02,699.759,1.577895);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.12);
   pad1->SetRightMargin(0.05);
   pad1->SetTopMargin(0.05);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   Double_t xe90_mht_data16_fx3001[13] = {
   10,
   30,
   55,
   85,
   120,
   160,
   200,
   240,
   280,
   320,
   370,
   450,
   550};
   Double_t xe90_mht_data16_fy3001[13] = {
   0.003966287,
   0.01011673,
   0.04850822,
   0.2415002,
   0.5779988,
   0.8726937,
   0.970297,
   0.9883721,
   1,
   1,
   1,
   1,
   1};
   Double_t xe90_mht_data16_felx3001[13] = {
   10,
   10,
   15,
   15,
   20,
   20,
   20,
   20,
   20,
   20,
   30,
   50,
   50};
   Double_t xe90_mht_data16_fely3001[13] = {
   0.001251918,
   0.001531723,
   0.00300207,
   0.007955164,
   0.01234505,
   0.01477276,
   0.01367325,
   0.01697162,
   0.03229151,
   0.08458096,
   0.09917226,
   0.119839,
   0.2496484};
   Double_t xe90_mht_data16_fehx3001[13] = {
   10,
   10,
   15,
   15,
   20,
   20,
   20,
   20,
   20,
   20,
   30,
   50,
   50};
   Double_t xe90_mht_data16_fehy3001[13] = {
   0.001586273,
   0.001701954,
   0.003124431,
   0.00807606,
   0.0122804,
   0.01385647,
   0.01051924,
   0.008444239,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,xe90_mht_data16_fx3001,xe90_mht_data16_fy3001,xe90_mht_data16_felx3001,xe90_mht_data16_fehx3001,xe90_mht_data16_fely3001,xe90_mht_data16_fehy3001);
   grae->SetName("xe90_mht_data16");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_graph30013001 = new TH1F("Graph_Graph_graph30013001","",100,0,600);
   Graph_Graph_graph30013001->SetMinimum(0.02);
   Graph_Graph_graph30013001->SetMaximum(1.5);
   Graph_Graph_graph30013001->SetDirectory(0);
   Graph_Graph_graph30013001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_graph30013001->SetLineColor(ci);
   Graph_Graph_graph30013001->SetLineWidth(2);
   Graph_Graph_graph30013001->SetMarkerStyle(20);
   Graph_Graph_graph30013001->SetMarkerSize(1.2);
   Graph_Graph_graph30013001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_graph30013001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_graph30013001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_graph30013001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_graph30013001->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_graph30013001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_graph30013001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_graph30013001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_graph30013001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_graph30013001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_graph30013001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_graph30013001->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_graph30013001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_graph30013001);
   
   
   TF1 *myfit3002 = new TF1("myfit","[0]*(1.0+TMath::Erf((x-[1])/[2]))+[3]",0,600);
   myfit3002->SetFillColor(19);
   myfit3002->SetFillStyle(0);
   myfit3002->SetMarkerStyle(20);
   myfit3002->SetMarkerSize(1.2);
   myfit3002->SetLineColor(2);
   myfit3002->SetLineWidth(3);
   myfit3002->SetChisquare(0.4988867);
   myfit3002->SetNDF(9);
   myfit3002->GetXaxis()->SetLabelFont(42);
   myfit3002->GetXaxis()->SetLabelSize(0.035);
   myfit3002->GetXaxis()->SetTitleSize(0.035);
   myfit3002->GetXaxis()->SetTitleFont(42);
   myfit3002->GetYaxis()->SetLabelFont(42);
   myfit3002->GetYaxis()->SetLabelSize(0.035);
   myfit3002->GetYaxis()->SetTitleSize(0.035);
   myfit3002->GetYaxis()->SetTitleFont(42);
   myfit3002->SetParameter(0,0.4938556);
   myfit3002->SetParError(0,0.0052104);
   myfit3002->SetParLimits(0,0,0);
   myfit3002->SetParameter(1,116.1958);
   myfit3002->SetParError(1,7.680986);
   myfit3002->SetParLimits(1,0,0);
   myfit3002->SetParameter(2,53.3871);
   myfit3002->SetParError(2,7.929292);
   myfit3002->SetParLimits(2,0,0);
   myfit3002->SetParameter(3,0.001339312);
   myfit3002->SetParError(3,0.004606534);
   myfit3002->SetParLimits(3,0,0);
   grae->GetListOfFunctions()->Add(myfit3002);
   
   TPaveStats *ptstats = new TPaveStats(0.5401003,0.6723067,0.9010025,0.9121868,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *AText = ptstats->AddText("#chi^{2} / ndf = 0.4989 / 9");
   AText = ptstats->AddText("p0       = 0.4939 #pm 0.00521 ");
   AText = ptstats->AddText("p1       = 116.2 #pm 7.681 ");
   AText = ptstats->AddText("p2       = 53.39 #pm 7.929 ");
   AText = ptstats->AddText("p3       = 0.001339 #pm 0.004607 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   grae->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(grae->GetListOfFunctions());
   grae->Draw("apz");
   
   TLegend *leg = new TLegend(0.59,0.15,0.9,0.30,NULL,"brNDC");
   leg->SetBorderSize(0);
//   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","Data 2016","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Fit","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.2,0.8446154,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(72);
   tex->SetTextSize(0.07211538);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.36,0.8446154," Internal");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.07211538);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.7753846,"#sqrt{s} = 13 TeV, 5.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04903846);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.7,"#epsilon_{HLT_xe90_mht_L1XE50}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();

   TLine *line1 = new TLine(150.,0.,150.,1.05);
   line1->SetLineStyle(7);
	 line1->SetLineWidth(2);
   line1->Draw();

   TLine *line2 = new TLine(250.,0.,250.,1.05);
   line2->SetLineStyle(7);
	 line2->SetLineWidth(2);
   line2->Draw();

   TGaxis *gaxis = new TGaxis(-5,20,-5,220,20,220,510,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(15);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(62);
   gaxis->SetLabelFont(43);
   gaxis->Draw();
   pad1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0.05,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-87.3253,-0.26,640.3855,0.14);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.12);
   pad2->SetRightMargin(0.05);
   pad2->SetBottomMargin(0.4);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3004[13] = {
   10,
   30,
   55,
   85,
   120,
   160,
   200,
   240,
   280,
   320,
   370,
   450,
   550};
   Double_t Graph0_fy3004[13] = {
   0.05139348,
   -0.2264525,
   -0.09664073,
   0.1588996,
   0.07467549,
   0.005823833,
   -0.00587958,
   -0.000166827,
   0.01095661,
   0.01094958,
   0.01094954,
   0.01094954,
   0.01094954};
   Double_t Graph0_felx3004[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fely3004[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehx3004[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehy3004[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(13,Graph0_fx3004,Graph0_fy3004,Graph0_felx3004,Graph0_fehx3004,Graph0_fely3004,Graph0_fehy3004);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_Graph30033004 = new TH1F("Graph_Graph_Graph30033004","",100,0,604);
   Graph_Graph_Graph30033004->SetMinimum(-0.1);
   Graph_Graph_Graph30033004->SetMaximum(0.1);
   Graph_Graph_Graph30033004->SetDirectory(0);
   Graph_Graph_Graph30033004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30033004->SetLineColor(ci);
   Graph_Graph_Graph30033004->SetLineWidth(2);
   Graph_Graph_Graph30033004->SetMarkerStyle(20);
   Graph_Graph_Graph30033004->SetMarkerSize(1.2);
   Graph_Graph_Graph30033004->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_Graph_Graph30033004->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph30033004->GetXaxis()->SetLabelSize(25);
   Graph_Graph_Graph30033004->GetXaxis()->SetTitleSize(25);
   Graph_Graph_Graph30033004->GetXaxis()->SetTitleOffset(3.55);
   Graph_Graph_Graph30033004->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph30033004->GetYaxis()->SetTitle("Residuals");
   Graph_Graph_Graph30033004->GetYaxis()->SetNdivisions(502);
   Graph_Graph_Graph30033004->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph30033004->GetYaxis()->SetLabelSize(25);
   Graph_Graph_Graph30033004->GetYaxis()->SetTitleSize(25);
   Graph_Graph_Graph30033004->GetYaxis()->SetTitleOffset(1.55);
   Graph_Graph_Graph30033004->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph30033004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30033004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph30033004->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph30033004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30033004);
   
   grae->Draw("apz");
   TLine *line3 = new TLine(150.,-0.1,150.,0.1);
   line3->SetLineStyle(7);
	 line3->SetLineWidth(2);
   line3->Draw();

   TLine *line4 = new TLine(250.,-0.1,250.,0.1);
   line4->SetLineStyle(7);
	 line4->SetLineWidth(2);
   line4->Draw();
   TLine *line = new TLine(0,0,604,0);
   line->SetLineStyle(2);
   line->Draw();
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
