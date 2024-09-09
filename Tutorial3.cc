void Tutorial3(){

  TH1F *hist= new TH1F("hist","Histogram",10,1,7);
  fstream file;
  file.open("data.txt",ios::in);
  
  double value;
  
  while(1) //leer cada uno de los datos del .txt en un ciclo while
  {
      file >> value;
      hist->Fill(value);
      if(file.eof()) break ;
  };
  file.close();
  hist->GetXaxis()->SetTitle("Grade");
  hist->GetYaxis()->SetTitle("Entries");
  
  TCanvas *c1 = new TCanvas();
  hist->Draw();
}
