#ifndef HEALTCAREPROJECT_H
#define HEALTCAREPROJECT_H

// ...existing code...
#pragma once

#include <stdio.h>  // C++-style; or use <stdio.h> for C compatibility
// ...existing code...
#include <string.h>

// USER AUTHENTICATION
struct User
{
    char username[50];
    char password[50];
    char role[20];
};

int authenticate(struct User u, char *username, char *password);

// PERSON → PATIENT / DOCTOR / STAFF
struct Patient
{
    char name[50];
    int age;
    char phone[30];
    char disease[50];
    char reports[10][50];
    int report_count;
    char appointments[10][50];
    int appt_count;
};

struct Doctor
{
    char name[50];
    char phone[30];
    char speciality[50];
};

struct Staff
{
    char name[50];
    char phone[30];
    char role[50];
};

// APPOINTMENT
void show_appointment(char *patient, char *doctor, char *date);

// REPORT
void show_report(char *patient, char *report);

// TELEMEDICINE
void start_telemedicine(char *patient, char *doctor);

// ADMIN DASHBOARD
void admin_dashboard(int p, int d, int s);

// MAIN PROGRAM
int start();

#endif // HEALTCAREPROJECT_H