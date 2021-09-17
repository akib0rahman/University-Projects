
namespace AiubManagementSystem
{
    partial class Teacher
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label3 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.panel1 = new System.Windows.Forms.Panel();
            this.btnSback = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.dataGridViewTeacher = new System.Windows.Forms.DataGridView();
            this.label11 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.lblTDepertment = new System.Windows.Forms.Label();
            this.lblTphone = new System.Windows.Forms.Label();
            this.txtTid = new System.Windows.Forms.TextBox();
            this.txtTname = new System.Windows.Forms.TextBox();
            this.comboBoxT = new System.Windows.Forms.ComboBox();
            this.txtTSalary = new System.Windows.Forms.TextBox();
            this.txtTDept = new System.Windows.Forms.TextBox();
            this.txtTAddress = new System.Windows.Forms.TextBox();
            this.lblTAddress = new System.Windows.Forms.Label();
            this.btnTAdd = new System.Windows.Forms.Button();
            this.btnTEdit = new System.Windows.Forms.Button();
            this.btnTDelete = new System.Windows.Forms.Button();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridViewTeacher)).BeginInit();
            this.SuspendLayout();
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.BackColor = System.Drawing.Color.Transparent;
            this.label3.Font = new System.Drawing.Font("Snap ITC", 22.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.ForeColor = System.Drawing.Color.Tomato;
            this.label3.Location = new System.Drawing.Point(351, 50);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(197, 49);
            this.label3.TabIndex = 15;
            this.label3.Text = "Teacher";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("SketchFlow Print", 22.2F, System.Drawing.FontStyle.Bold);
            this.label1.ForeColor = System.Drawing.Color.Transparent;
            this.label1.Location = new System.Drawing.Point(194, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(116, 41);
            this.label1.TabIndex = 1;
            this.label1.Text = "AIUB";
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.Color.SteelBlue;
            this.panel1.Controls.Add(this.btnSback);
            this.panel1.Controls.Add(this.button1);
            this.panel1.Controls.Add(this.label3);
            this.panel1.Controls.Add(this.label2);
            this.panel1.Controls.Add(this.label1);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Top;
            this.panel1.Location = new System.Drawing.Point(0, 0);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(986, 105);
            this.panel1.TabIndex = 2;
            // 
            // btnSback
            // 
            this.btnSback.BackColor = System.Drawing.Color.Red;
            this.btnSback.FlatAppearance.BorderSize = 0;
            this.btnSback.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnSback.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnSback.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.btnSback.Location = new System.Drawing.Point(0, -1);
            this.btnSback.Name = "btnSback";
            this.btnSback.Size = new System.Drawing.Size(71, 32);
            this.btnSback.TabIndex = 22;
            this.btnSback.Text = "Back";
            this.btnSback.UseVisualStyleBackColor = false;
            this.btnSback.Click += new System.EventHandler(this.btnSback_Click);
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.Color.Red;
            this.button1.Location = new System.Drawing.Point(926, 0);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(60, 32);
            this.button1.TabIndex = 18;
            this.button1.Text = "X";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.Transparent;
            this.label2.Font = new System.Drawing.Font("SketchFlow Print", 22.2F, System.Drawing.FontStyle.Bold);
            this.label2.ForeColor = System.Drawing.Color.Transparent;
            this.label2.Location = new System.Drawing.Point(306, 9);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(418, 41);
            this.label2.TabIndex = 2;
            this.label2.Text = "Management System";
            // 
            // dataGridViewTeacher
            // 
            this.dataGridViewTeacher.BackgroundColor = System.Drawing.Color.White;
            this.dataGridViewTeacher.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridViewTeacher.Location = new System.Drawing.Point(109, 359);
            this.dataGridViewTeacher.Name = "dataGridViewTeacher";
            this.dataGridViewTeacher.RowHeadersWidth = 51;
            this.dataGridViewTeacher.RowTemplate.Height = 24;
            this.dataGridViewTeacher.Size = new System.Drawing.Size(862, 283);
            this.dataGridViewTeacher.TabIndex = 18;
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.BackColor = System.Drawing.Color.SteelBlue;
            this.label11.Font = new System.Drawing.Font("SketchFlow Print", 22.2F, System.Drawing.FontStyle.Bold);
            this.label11.ForeColor = System.Drawing.Color.Transparent;
            this.label11.Location = new System.Drawing.Point(352, 315);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(284, 41);
            this.label11.TabIndex = 19;
            this.label11.Text = "Teachers List";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.ForeColor = System.Drawing.Color.SteelBlue;
            this.label4.Location = new System.Drawing.Point(44, 145);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(24, 20);
            this.label4.TabIndex = 20;
            this.label4.Text = "Id";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.ForeColor = System.Drawing.Color.SteelBlue;
            this.label5.Location = new System.Drawing.Point(25, 192);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(57, 20);
            this.label5.TabIndex = 21;
            this.label5.Text = "Name";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.ForeColor = System.Drawing.Color.SteelBlue;
            this.label6.Location = new System.Drawing.Point(344, 188);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(70, 20);
            this.label6.TabIndex = 22;
            this.label6.Text = "Gender";
            // 
            // lblTDepertment
            // 
            this.lblTDepertment.AutoSize = true;
            this.lblTDepertment.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTDepertment.ForeColor = System.Drawing.Color.SteelBlue;
            this.lblTDepertment.Location = new System.Drawing.Point(365, 133);
            this.lblTDepertment.Name = "lblTDepertment";
            this.lblTDepertment.Size = new System.Drawing.Size(49, 20);
            this.lblTDepertment.TabIndex = 23;
            this.lblTDepertment.Text = "Dept";
            // 
            // lblTphone
            // 
            this.lblTphone.AutoSize = true;
            this.lblTphone.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTphone.ForeColor = System.Drawing.Color.SteelBlue;
            this.lblTphone.Location = new System.Drawing.Point(713, 188);
            this.lblTphone.Name = "lblTphone";
            this.lblTphone.Size = new System.Drawing.Size(62, 20);
            this.lblTphone.TabIndex = 24;
            this.lblTphone.Text = "Salary";
            // 
            // txtTid
            // 
            this.txtTid.ForeColor = System.Drawing.Color.SteelBlue;
            this.txtTid.Location = new System.Drawing.Point(99, 133);
            this.txtTid.Multiline = true;
            this.txtTid.Name = "txtTid";
            this.txtTid.Size = new System.Drawing.Size(155, 32);
            this.txtTid.TabIndex = 25;
            // 
            // txtTname
            // 
            this.txtTname.ForeColor = System.Drawing.Color.SteelBlue;
            this.txtTname.Location = new System.Drawing.Point(99, 188);
            this.txtTname.Multiline = true;
            this.txtTname.Name = "txtTname";
            this.txtTname.Size = new System.Drawing.Size(155, 32);
            this.txtTname.TabIndex = 26;
            // 
            // comboBoxT
            // 
            this.comboBoxT.ForeColor = System.Drawing.Color.Black;
            this.comboBoxT.FormattingEnabled = true;
            this.comboBoxT.Items.AddRange(new object[] {
            "Male",
            "Female"});
            this.comboBoxT.Location = new System.Drawing.Point(431, 188);
            this.comboBoxT.Name = "comboBoxT";
            this.comboBoxT.Size = new System.Drawing.Size(155, 24);
            this.comboBoxT.TabIndex = 27;
            // 
            // txtTSalary
            // 
            this.txtTSalary.ForeColor = System.Drawing.Color.SteelBlue;
            this.txtTSalary.Location = new System.Drawing.Point(791, 180);
            this.txtTSalary.Multiline = true;
            this.txtTSalary.Name = "txtTSalary";
            this.txtTSalary.Size = new System.Drawing.Size(155, 32);
            this.txtTSalary.TabIndex = 29;
            // 
            // txtTDept
            // 
            this.txtTDept.ForeColor = System.Drawing.Color.SteelBlue;
            this.txtTDept.Location = new System.Drawing.Point(431, 133);
            this.txtTDept.Multiline = true;
            this.txtTDept.Name = "txtTDept";
            this.txtTDept.Size = new System.Drawing.Size(155, 32);
            this.txtTDept.TabIndex = 31;
            // 
            // txtTAddress
            // 
            this.txtTAddress.ForeColor = System.Drawing.Color.SteelBlue;
            this.txtTAddress.Location = new System.Drawing.Point(791, 133);
            this.txtTAddress.Multiline = true;
            this.txtTAddress.Name = "txtTAddress";
            this.txtTAddress.Size = new System.Drawing.Size(155, 32);
            this.txtTAddress.TabIndex = 32;
            // 
            // lblTAddress
            // 
            this.lblTAddress.AutoSize = true;
            this.lblTAddress.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTAddress.ForeColor = System.Drawing.Color.SteelBlue;
            this.lblTAddress.Location = new System.Drawing.Point(697, 133);
            this.lblTAddress.Name = "lblTAddress";
            this.lblTAddress.Size = new System.Drawing.Size(78, 20);
            this.lblTAddress.TabIndex = 33;
            this.lblTAddress.Text = "Address";
            // 
            // btnTAdd
            // 
            this.btnTAdd.BackColor = System.Drawing.Color.Violet;
            this.btnTAdd.FlatAppearance.BorderSize = 0;
            this.btnTAdd.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnTAdd.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnTAdd.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnTAdd.Location = new System.Drawing.Point(7, 269);
            this.btnTAdd.Name = "btnTAdd";
            this.btnTAdd.Size = new System.Drawing.Size(75, 39);
            this.btnTAdd.TabIndex = 34;
            this.btnTAdd.Text = "Add";
            this.btnTAdd.UseVisualStyleBackColor = false;
            this.btnTAdd.Click += new System.EventHandler(this.btnTAdd_Click);
            // 
            // btnTEdit
            // 
            this.btnTEdit.BackColor = System.Drawing.Color.Violet;
            this.btnTEdit.FlatAppearance.BorderSize = 0;
            this.btnTEdit.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnTEdit.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnTEdit.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnTEdit.Location = new System.Drawing.Point(88, 269);
            this.btnTEdit.Name = "btnTEdit";
            this.btnTEdit.Size = new System.Drawing.Size(75, 39);
            this.btnTEdit.TabIndex = 35;
            this.btnTEdit.Text = "Edit";
            this.btnTEdit.UseVisualStyleBackColor = false;
            this.btnTEdit.Click += new System.EventHandler(this.btnTEdit_Click);
            // 
            // btnTDelete
            // 
            this.btnTDelete.BackColor = System.Drawing.Color.Violet;
            this.btnTDelete.FlatAppearance.BorderSize = 0;
            this.btnTDelete.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnTDelete.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnTDelete.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnTDelete.Location = new System.Drawing.Point(169, 269);
            this.btnTDelete.Name = "btnTDelete";
            this.btnTDelete.Size = new System.Drawing.Size(85, 39);
            this.btnTDelete.TabIndex = 36;
            this.btnTDelete.Text = "Delete";
            this.btnTDelete.UseVisualStyleBackColor = false;
            this.btnTDelete.Click += new System.EventHandler(this.btnTDelete_Click);
            // 
            // Teacher
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(986, 652);
            this.Controls.Add(this.btnTDelete);
            this.Controls.Add(this.btnTEdit);
            this.Controls.Add(this.btnTAdd);
            this.Controls.Add(this.lblTAddress);
            this.Controls.Add(this.txtTAddress);
            this.Controls.Add(this.txtTDept);
            this.Controls.Add(this.txtTSalary);
            this.Controls.Add(this.comboBoxT);
            this.Controls.Add(this.txtTname);
            this.Controls.Add(this.txtTid);
            this.Controls.Add(this.lblTphone);
            this.Controls.Add(this.lblTDepertment);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.dataGridViewTeacher);
            this.Controls.Add(this.panel1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "Teacher";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Teacher";
            this.Load += new System.EventHandler(this.Teacher_Load);
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridViewTeacher)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.DataGridView dataGridViewTeacher;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label lblTDepertment;
        private System.Windows.Forms.Label lblTphone;
        private System.Windows.Forms.TextBox txtTid;
        private System.Windows.Forms.TextBox txtTname;
        private System.Windows.Forms.ComboBox comboBoxT;
        private System.Windows.Forms.TextBox txtTSalary;
        private System.Windows.Forms.TextBox txtTDept;
        private System.Windows.Forms.TextBox txtTAddress;
        private System.Windows.Forms.Label lblTAddress;
        private System.Windows.Forms.Button btnTAdd;
        private System.Windows.Forms.Button btnTEdit;
        private System.Windows.Forms.Button btnTDelete;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button btnSback;
    }
}